#include <iostream>
using namespace std;

double alas, tinggi;

void prosedurInput(){
    cout << "Masukkan Nilai alas = ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi = ";
    cin >> tinggi;
}

double hitungLuas(){
    return 0.5 * alas * tinggi;
}

void prosedurOutput(){
    cout << "Luas Segitiga = " << hitungLuas() << endl;
}

int main(){
    prosedurInput();
    prosedurOutput();
}