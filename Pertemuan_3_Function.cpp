#include <iostream>
using namespace std;

double luas, alas, tinggi;

void prosedurInput(){
    cout << "Masukkan Nilai alas = ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi = ";
    cin >> tinggi;
}

void prosedurHitungLuas(){
    luas = 0.5 * alas * tinggi;
}

void prosedurOutput(){
    cout << "Luas Segitiga = " << luas << endl;
}

int main(){
    prosedurInput();
    prosedurHitungLuas();
    prosedurOutput();
}