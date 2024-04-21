#include <iostream>
using namespace std;

class Mahasiswa {
protected:
    string nama, jurusan, fakultas;
    int umur;
    
public:
    Mahasiswa(string _nama, int _umur, string _jurusan, string _fakultas) : nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}
    virtual void status() const = 0;
    void dataMahasiswa() const {
        cout << "Nama mhs: " << nama << endl;
        cout << "Umur mhs: " << umur << endl;
        cout << "Jurusan mhs: " << jurusan << endl;
        cout << "Fakultas mhs: " << fakultas << endl;
        status();
    }
};

class MahasiswaAktif : public Mahasiswa {
public:
    MahasiswaAktif(string _nama, int _umur, string _jurusan, string _fakultas) : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}
    void status() const override {
        cout << "Status mhs: Aktif" << endl;
        cout << "\n=================================";
        cout << "\n=================================" <<endl;
    }
};

class MahasiswaAlumni : public Mahasiswa {
public:
    MahasiswaAlumni(string _nama, int _umur, string _jurusan, string _fakultas) : Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}
    void status() const override {
        cout << "Status mhs: Alumni" << endl;
    }
};

int main() {
    Mahasiswa* ptrMahasiswaAktif = new MahasiswaAktif("Guntur Purnama", 19, "Teknologi Informasi", "Informatika");
    cout << "!!! Informasi Mahasiswa Aktif !!!" << endl;
    cout << "---------------------------------" <<endl;
    ptrMahasiswaAktif->dataMahasiswa();
    delete ptrMahasiswaAktif;
    cout << endl;

    Mahasiswa* ptrMahasiswaAlumni = new MahasiswaAlumni("Shania oktaviani", 20, "ATC", "Penerbangan");
    cout << "!!! Informasi Mahasiswa Alumni !!!" << endl;
    cout << "----------------------------------" <<endl;
    ptrMahasiswaAlumni->dataMahasiswa();
    delete ptrMahasiswaAlumni;
    return 0;
}
