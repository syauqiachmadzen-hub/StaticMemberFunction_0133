#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;
    
public:
    angkla(int); //constructor
    ~angka();    //destructor
    void cetakData();
    void isiData();    
};

angka::angka(int i){  //constructor
    panjang = 1;
    arr = new int[i];
    isiData();
}
angka::~angka(){ //destructor
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array suudah Dilepaskan" << endl;
}

