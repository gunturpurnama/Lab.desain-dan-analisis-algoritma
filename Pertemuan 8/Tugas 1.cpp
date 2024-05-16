#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> antrian;
    int jumlahAngka;

    cout << "Inputkan jumlah angka queue: ";
    cin >> jumlahAngka;

    cout << "Input " << jumlahAngka << " Angka: \n";
    for (int i = 0; i < jumlahAngka; i++) {
        int angka;
        cin >> angka;
        antrian.push(angka);
    }

    cout << "Menampilkan Dari Queue: \n";
    while (!antrian.empty()) {
        int angka = antrian.front();
        cout << angka << " ";
        antrian.pop();
    }

    cout << endl;
    return 0;
}

