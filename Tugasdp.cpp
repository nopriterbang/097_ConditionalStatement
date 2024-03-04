#include <iostream>
using namespace std;

int main(){
    string status;
    int nMTK, nFISIKA, nRerata;

    cout << "Masukan nilai Matematika = ";
    cin >> nMTK;
    
    cout << "Masukan nilai Fisika = ";
    cin >> nFISIKA;
    nRerata = (nMTK + nFISIKA) / 2;

    if(nRerata >= 60){
        status = "Lulus";
    }
    else if(nMTK >= 70){
        status = "Lulus";
    }
    else{
        status = "Tidak Lulus";
    }
    cout << "Tampilkan Status = " << status << endl;
}