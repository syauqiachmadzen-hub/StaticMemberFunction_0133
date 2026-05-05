#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa

public:
    stastic int nim; //deklarasi variabel stactic yaitu variable nim
    //deklarasi variable member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printAll()
    void setID();
    void printAll();

    //pembuataan constructor Mahasiswa dengan prameter pnama
    //member initialize list
    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

//memberi value ke variable nim dari class mahasiswa
int Mahasiswa::nim = 0;

//mengimplementasikan prosedur - prosedur di luar class
void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printAll() {
    cout << "ID : " << id << endll;
    cout << "Nama : " << nama << endl;
    cout << endl;
};

int main() {
    //membuat object dan memberi nilai
    Mahasiswa mhs1("Lia Kurnia");
    Mahasiswa mhs2("Asroni");
    Mahasiswa mhs3("Andi Kurniawan");
    Mahasiswamhs4("joko purbo");

    //memanggil prosedur priantAll()
    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    
    return 0;
}