#include <iostream>
using namespace std;

class Kalkulator {
private:
    int angka1;
    int angka2;

public:
    // Setter untuk angka pertama
    void setAngka1(int angka) {
        angka1 = angka;
    }

    // Setter untuk angka kedua
    void setAngka2(int angka) {
        angka2 = angka;
    }

    // Getter untuk angka pertama
    int getAngka1() {
        return angka1;
    }

    // Getter untuk angka kedua
    int getAngka2() {
        return angka2;
    }

    // Melakukan operasi penambahan
    int tambah() {
        return angka1 + angka2;
    }

    // Melakukan operasi pengurangan
    int kurang() {
        return angka1 - angka2;
    }

    // Melakukan operasi perkalian
    int kali() {
        return angka1 * angka2;
    }

    // Melakukan operasi pembagian
    float bagi() {
        if (angka2 != 0) {
            return (float)angka1 / angka2; // Mengkonversi hasil pembagian menjadi float
        } else {
            cout << "Error: Pembagian dengan nol tidak bisa dilakukan!" << endl;
            return 0;
        }
    }
};

int main() {
    int input1, input2;

    // Meminta input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> input1;
    cout << "Masukkan angka kedua: ";
    cin >> input2;

    // Membuat objek kalkulator
    Kalkulator k;

    // Mengatur nilai angka1 dan angka2 menggunakan setter
    k.setAngka1(input1);
    k.setAngka2(input2);

    // Menampilkan hasil operasi menggunakan getter
    cout << "Hasil penambahan: " << k.tambah() << endl;
    cout << "Hasil pengurangan: " << k.kurang() << endl;
    cout << "Hasil perkalian: " << k.kali() << endl;
    cout << "Hasil pembagian: " << k.bagi() << endl;

    return 0;
}

