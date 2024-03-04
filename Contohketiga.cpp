#include <iostream>
using namespace std;

int main(){
    int nBilA, nBilB;
    string status;
    srand(time(0));

    nBilA = rand() % 10;
    nBilB = rand() % 10;

    cout << "Tampilkan bilangan A = " << nBilA << endl;
    cout << "Tampilkan bilangan B = " << nBilB << endl;

    if(nBilA == nBilB){
        status = "nilai A dan nilai B sama besar ";
    }
    else if (nBilA > nBilB){
        status = "bilangan A lebih besar dari bilangan B ";
    }
    else{
        status = "bilangan A lebih kecil dari bilangan B ";
    }
    cout << "Tampilkan status = " << status << endl;

    return 0;


}