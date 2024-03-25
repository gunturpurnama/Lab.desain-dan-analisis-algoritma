#include <iostream>
using namespace std;

void swap( int arr[], int pos1, int pos2) { //untuk fungsi swap disini untuk menukar value dari 2 element fungsi ini jga mempunyai 2 parameter//
	int temp;//index untuk menampung 
	temp = arr[pos1]; //menyimpan nilai elemnt pos1 ke dalam temp
	arr[pos1] = arr[pos2]; //mengswap atau mengganti nilai elemnt pos1 dengan pos 2
	arr[pos2] = temp; //mengswap atau mengganti nilai atau value pos2 dengan value sebelum di simpan di temp
}

int partition(int arr[], int low, int high, int pivot) { //di sini fungsi partition digunakan untuk memngelompokan atau mempartisi array berdasarkan nilai pivot
	int i = low; //untuk melacak element yang kecil atau lebih kecil dari pivot
	int j = low; //ini untuk menemukan letak elemnt yang sudah di partisi
	while(i <= high) { //Melooping selama variabel i tidak melewati batas high
	
		if(arr[i] > pivot) { //variable i lebih besar dari pivot
			i++;
		}
		else{
			swap(arr,i,j); //menukar elemnt i dengan elemnt j 
			i++; //Lanjutkan ke elemen berikutnya
			j++; //memindahkan indeks j untuk menempatkan elemen yang memiliki nilai lebih kecil dari pivot
		}
	}
	return j-1;//Mengembalikan indeks terakhir partisi elemen yang lebih kecil dari pivot
}

void quicksort(int arr[], int low, int high) {//menggunakan methone quickshort untuk pengurutan array
	if(low < high) {// jika low belum melewati high (masih ada elemen untuk diurutkan
		int pivot = arr[high];//elemen paling kanan sebagai pivot
		int pos = partition(arr, low, high, pivot);// partisi array berdasarkan pivot
		
		quicksort(arr, low, pos-1);//elemen lebih kecil dari pivot
		quicksort(arr, pos+1, high);//elemen lebih besar dari pivot
	}
}

int main()
{
	int n;
	cout << "Tentukanlah panjangnya array : "; //meminta pengguna untuk memasukan panjang array
	cin>>n;
	int arr[n];//deklarasi array dengan panjang n
	for(int i = 0; i < n; i++) {//looping untuk meminta pengguna memasukan elemen array
		cin>>arr[i];
	}
	quicksort(arr, 0, n-1);//memanggil fungsi quicksort untuk mengurutkan array
	cout<<"Ini adalah array yang telah sudah sortir: ";//mencetak pesan bahwa array sudah diurutkan
	for(int i = 0; i < n; i++) {//looping untuk mencetak elemen array yang sudah diurutkan
		cout<<arr[i]<<"\t";
	}
}
