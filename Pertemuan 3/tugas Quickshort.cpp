#include <iostream>
#include <algorithm>
using namespace std;

int part(int ar[], int rendah, int tinggi) {
    int pivot = ar[tinggi];
    int i = rendah - 1;

    for (int j = rendah; j < tinggi; j++) {
        if (ar[j] > pivot) {
            i++;
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[i + 1], ar[tinggi]);
    return i + 1;
}

void qs(int rr[], int rendah, int tinggi) {
    if (rendah < tinggi) {
        int pi = part(rr, rendah, tinggi);

        cout << "[ ";
        for (int i = 0; i < 10; i++) {
            cout << rr[i] << " ";
        }
        cout << " ]";
        cout << endl;

        qs(rr, rendah, pi - 1);
        qs(rr, pi + 1, tinggi);
    }
}

int main() {
    int ar[100];
    
    cout << "input 10 data: [ ";
    for (int i = 0; i < 10; i++) {
        cin >> ar[i];
    }
    cout << "]" << endl;
    
    system("cls");
    
    cout << "Data yang akan di sorttir : [ ";
    for (int i = 0; i < 10; i++) {
        cout << ar[i] << " ";
    }
    cout << "]" << endl << endl;

    cout << "QuickSort: " << endl;
    qs(ar, 0, 10 - 1);

    return 0;
}
