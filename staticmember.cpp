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

