#include <stdio.h>
#include <stdlib.h>

void swap(int a[], int b, int c) {
    int temp = a[b];
    a[b] = a[c];
    a[c] = temp;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[low];
        int i = low + 1, j = low + 1;
        
        printf("Pivot: %d\n", pivot);
        printf("status array yang telah dipartisi :\n");
        for (int k = low; k <= high; k++) {
            printf("%d ", a[k]);
        }
        printf("\n");
        
        while (j <= high) {
            if (a[j] > pivot) {
                j++;
            } else {
                swap(a, i, j);
                i++;
                j++;
            }
        }
        swap(a, low, i - 1);
        
        quicksort(a, low, i - 2);
        quicksort(a, i, high);
    }
}

int main() {
    int a[10];
    int i, n;
    
    printf("Masukan berapa element: ");
    scanf("%d", &n);
    
    printf("Masukan %d element :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    quicksort(a, 0, n - 1);
    
    printf("Element array yang telah disortir :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

