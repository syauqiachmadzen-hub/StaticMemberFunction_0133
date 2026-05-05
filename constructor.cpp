#include <iostream>
using namespace std;

class mahasiswa {
public:
   mahasiswa(); //constructor    
};

mahasiswa::mahasiswa() {
    cout << "constructor Terpanggil" << endl; //Definisi constructor
};

int main() {
    mahasiswa mhs; // pembuatan Object
    return 0; 
} 


