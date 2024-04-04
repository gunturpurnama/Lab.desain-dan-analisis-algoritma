#include <iostream>
using namespace std;

class Kalkulator {
private:
    int angka1;
    int angka2;

public:
    void setAngka1(int angka) {
        angka1 = angka;
    }

    void setAngka2(int angka) {
        angka2 = angka;
    }

    int getAngka1() {
        return angka1;
    }

    int getAngka2() {
        return angka2;
    }

    int tambah() {
        return angka1 + angka2;
    }

    int kurang() {
        return angka1 - angka2;
    }

    int kali() {
        return angka1 * angka2;
    }

    float bagi() {
        if (angka2 != 0) {
            return (float)angka1 / angka2;
        } else {
            cout << "Kesalahan : Pembagian dengan nol gagal!" << endl;
            return 0;
        }
    }
};

int main() {
    int input1, input2;

    cout << "Masukkan angka pertama: ";
    cin >> input1;
    cout << "Masukkan angka kedua: ";
    cin >> input2;

    Kalkulator k;

    k.setAngka1(input1);
    k.setAngka2(input2);

    cout << "Hasil penambahan: " << k.tambah() << endl;
    cout << "Hasil pengurangan: " << k.kurang() << endl;
    cout << "Hasil perkalian: " << k.kali() << endl;
    cout << "Hasil pembagian: " << k.bagi() << endl;

    return 0;
}

