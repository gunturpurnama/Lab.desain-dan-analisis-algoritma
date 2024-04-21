#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int usia;
    float ipk;
    string nama;
public:
    void setNama(string a) {
        nama = a;
    }
    void setUsia(int b) {
        usia = b;
    }
    void setIPK(float c) {
        ipk = c;
    }
    string getNama() {
        return nama;
    }
    int getUsia() {
        return usia;
    }
    float getIPK() {
        return ipk;
    }
};

int main() {
    int jumlahData;

    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> jumlahData;
    cout << "================================" <<endl;
	cout << "================================" <<endl <<endl;
	
    Mahasiswa *ms = new Mahasiswa[jumlahData];

    for (int i = 0; i < jumlahData; i++) {
        string nama;
        int usia;
        float ipk;

        cout << "Nama mahasiswa ke " << i <<" : ";
        cin >> nama;
        ms[i].setNama(nama);

        cout << "Usia: ";
        cin >> usia;
        ms[i].setUsia(usia);

        cout << "IPK: ";
        cin >> ipk;
        ms[i].setIPK(ipk);

        cout << endl;
    }
	cout << "================================" <<endl;
	cout << "================================" <<endl <<endl;
    cout << "Data Mahasiswa:" << endl <<endl;
    for (int i = 0; i < jumlahData; i++) {
        cout << "Nama mahasiswa ke " << i <<" : " << ms[i].getNama() << endl;
        cout << "Usia: " << ms[i].getUsia() << endl;
        cout << "IPK: " << ms[i].getIPK() << endl << endl;
    }

    delete[] ms;

    return 0;
}
