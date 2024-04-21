#include <iostream>
using namespace std;

class Kendaraan {
protected:
    string merek;
    int tahunProduksi, jumlahseat;
public:
    Kendaraan(string _merek, int _tahunProduksi, int _jumlahseat) : merek(_merek), tahunProduksi(_tahunProduksi), jumlahseat(_jumlahseat) {}
    virtual void info() const = 0;

    void dataMobil() const {
        cout << "Merek : " << merek << endl;
        cout << "Tahun : " << tahunProduksi << endl;
        info();
    }
};

class Mobil : public Kendaraan {
public:
    Mobil(string _merek, int _tahunProduksi, int _jumlahseat) : Kendaraan(_merek, _tahunProduksi, _jumlahseat) {}
    void info() const override {
        cout << "Jumlah seat : " << jumlahseat << endl;
    }
};

int main() {
    string merekMobil = "Oddysey";
    int tahunProduksiMobil = 2003, jumlahseatMobil = 6;
    Mobil mobil(merekMobil, tahunProduksiMobil, jumlahseatMobil); 
    cout << "!!! Informasi Mobil !!! " << endl <<endl;
    mobil.dataMobil();
    return 0;
}

