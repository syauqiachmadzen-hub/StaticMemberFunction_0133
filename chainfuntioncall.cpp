#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku &setJudul(string judul){
        this->judul = judul;
        return *this; //chain function
    }
    string getJuduul(){
        return this->judul;
    }

};

int main()
{
    buku bukunya;
    //bukunya.setJudul("mattematika");
    //cout << bukunya.getJudul();
    cout<<bukunya.setJudul("Matematikka").getJudul();   //chain function calls
    return 0;
}