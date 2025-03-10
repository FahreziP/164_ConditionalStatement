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

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

void prosedurOutput(){
    cout << "Luas Segitiga = " << hitungLuas() << endl;
}

void prosedurOutput2(){
    cout << "Luas Segitiga 2 = " << hitungLuas2(alas, tinggi) << endl;
}

int main(){
    prosedurInput();
    prosedurOutput();
    prosedurOutput2();
}