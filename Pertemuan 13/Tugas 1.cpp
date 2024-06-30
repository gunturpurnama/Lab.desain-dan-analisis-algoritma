#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    vector<int> table;
    int size;

public:
    HashTable(int s) : size(s) {
        table.resize(size, -1);  // Inisialisasi tabel dengan -1 yang menunjukkan "Kosong"
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);
        int originalIndex = index;
        int i = 1;

        while (table[index] != -1) {
            index = (originalIndex + i) % size;  // Linear probing
            i++;
        }
        table[index] = key;
    }

    void display() {
        cout << "isi tabel hash:" << endl;
        for (int i = 0; i < size; i++) {
            cout << i << " --> ";
            if (table[i] == -1) {
                cout << "Kosong";
            } else {
                cout << table[i];
            }
            cout << endl;
        }
    }

    bool search(int key) {
        int index = hashFunction(key);
        int originalIndex = index;
        int i = 1;

        while (table[index] != -1) {
            if (table[index] == key) {
                return true;
            }
            index = (originalIndex + i) % size;  // Linear probing
            i++;
        }
        return false;
    }
};

int main() {
    int tableSize, numElements, element;

    cout << "Masukkan ukuran tabel hash: ";
    cin >> tableSize;

    HashTable ht(tableSize);

    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> numElements;

    cout << "Masukkan " << numElements << " elemen: " << endl;
    for (int i = 0; i < numElements; i++) {
        cin >> element;
        ht.insert(element);
    }

    ht.display();

    cout << "Masukkan elemen yang ingin dicari dalam tabel hash: ";
    cin >> element;

    if (ht.search(element)) {
        cout << element << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << element << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}
