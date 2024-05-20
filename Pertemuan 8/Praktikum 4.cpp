#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> antrian;
	
	int jumlahAngka;
	cout << " Masukkan jumlah angka yang ingin dimasukkan kedalam queue: ";
	cin >> jumlahAngka;
	
	cout <<"Masukkan " << jumlahAngka << " Angka :\n";
	for(int i = 0; i < jumlahAngka; i++){
	int angka;
	cin >> angka;
	antrian.push(angka);
    }

    cout << "menampilkan angka dari queue:\n";
    while(!antrian.empty()) {
    	int angka = antrian.front();
    	cout << angka <<" ";
    	antrian.pop();
	}
	
	cout << endl;
	
	return 0;
	
}
