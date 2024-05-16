#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> nameQueue;
    int max;
    
    cout << "Inputkan Jumlah Nama Yang Dimasukkan Kedalam Antrian: ";
    cin >> max;
    cout << endl;
    cin.ignore(); // Membersihkan buffer input setelah cin

    for (int i = 0; i < max; i++) {
        string name;
        cout << "Inputkan Nama Ke-" << i + 1 << ": ";
        getline(cin, name);
        nameQueue.push(name);
    }

    cout << "\nNama-nama Dalam Antrian: \n";
    while (!nameQueue.empty()) {
        string name = nameQueue.front();
        cout << name << endl;
        nameQueue.pop();
    }

    return 0;
}

