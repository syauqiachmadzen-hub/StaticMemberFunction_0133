//deklarasi library
#include <iostream>
#include <string>
using namespace std;

//class mahasiswa dengan constructor overloading untuk menginisialisasi atribut nim dan nama dengan berbagai cara, serta method cetak untuk menampilkan informasi mahasiswa
class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim,string iNama);
    void cetak();
};
//definisi constructor
mahasiswa::mahasiswa(){

}
//constructor dengan parameter untuk inisialisasi nim
mahasiswa::mahasiswa(int iNim){
    nim = iNim;
}
//constructor dengan parameter untuk inisialisasi nama
mahasiswa::mahasiswa(string iNama){
    nama = iNama;
}
//constructor dengan parameter untuk inisialisasi nim dan nama
mahasiswa::mahasiswa(int iNim,string iNama){
    nim = iNim;
    nama = iNama;
}
//method cetak untuk menampilkan informasi mahasiswa
void mahasiswa::cetak(){
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
}
//fungsi utama untuk membuat objek mahasiswa dengan berbagai constructor dan menampilkan informasinya
int main(){
    mahasiswa mhs1;
    mahasiswa mhs2(113);
    mahasiswa mhs3("Rizki Tukang Makan");
    mahasiswa mhs4(114,"Siti Aminah");

    cout<<"Mahasiswa 1: "; mhs1.cetak();
    cout<<"Mahasiswa 2: "; mhs2.cetak();
    cout<<"Mahasiswa 3: "; mhs3.cetak();
    cout<<"Mahasiswa 4: "; mhs4.cetak();
    return 0;
}