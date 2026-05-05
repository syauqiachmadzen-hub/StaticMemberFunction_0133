#include <iostream>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    // 2. Constructor dengan parameter id saja
    Kendaraan(int i) {
        id = i;
        nama = "Tidak diketahui";
    }

    // 3. Constructor dengan parameter nama saja
    Kendaraan(string n) {
        id = 0;
        nama = n;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int i, string n) {
        id = i;
        nama = n;
    }

    // Method untuk menampilkan data
    void tampil() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Membuat objek dengan 4 cara
    Kendaraan k1;                  // default
    Kendaraan k2(101);             // hanya id
    Kendaraan k3("Motor");         // hanya nama
    Kendaraan k4(202, "Mobil");    // lengkap

    // Menampilkan data
    k1.tampil();
    k2.tampil();
    k3.tampil();
    k4.tampil();

    return 0;
}