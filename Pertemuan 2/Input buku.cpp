#include <iostream>
using namespace std;

int main() {
    int jumlah;
    string buku[100];
 
    cout << "Input jumlah buku : ";
    cin >> jumlah;
    cin.ignore();

    cout << "\nInput nama buku :" << endl;
    for (int i = 0; i < jumlah; ++i) {
    	cout << "Buku ke-"<<i+1<<" : ";
        getline(cin, buku[i]);
    }


    for (int i = 0; i < jumlah - 1; ++i) {
        for (int j = 0; j < jumlah - i - 1; ++j) {
            if (buku[j] > buku[j + 1]) {
                string temp = buku[j];
                buku[j] = buku[j + 1];
                buku[j + 1] = temp;
            }
        }
    }

    cout << "\nJudul buku setelah disorting secara ascending :" << endl;
    for (int i = 0; i < jumlah; ++i) {
        cout << buku[i] << endl;
    }

    return 0;
}
