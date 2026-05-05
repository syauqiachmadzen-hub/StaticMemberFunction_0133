//deklarsi library
#include <iostream>
#include <string>
using namespace std;

//membuat class mahasiswa dengan constructor yang memiliki parameter untuk menginisialisasi atribut nim dan nama, serta mencetak pesan saat dipanggil
class mahasiswa{
    public:
    mahasiswa(int nim,string nama);
};

mahasiswa::mahasiswa(int nim,string nama){
    cout << "Constructor dengan parameter dipanggil!" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nama: " << nama << endl;
};
//fungsi utama
int main(){
    mahasiswa mhs(12345, "pascal");
    return 0;
}