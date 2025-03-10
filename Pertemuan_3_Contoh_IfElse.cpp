#include <iostream>
using namespace std;

double alas, tinggi;

void prosedurInput(){
    cout << "Masukkan Nilai alas = ";
    cin >> alas;

    cout << "Masukkan Nilai tinggi = ";
    cin >> tinggi;
}

double hitungLuas2(double a, double t){
    return 0.5 * a * t;
}

string ukuranSegitiga(double l){
    //jika luas > 60
    if (l > 60){
        return "Besar";
    }
    else{
        return "Kecil";
    }
}

void prosedurOutput2(){
    cout << "Luas Segitiga = " << ukuranSegitiga(hitungLuas2(alas, tinggi)) << endl;
}

int main(){
    prosedurInput();
    prosedurOutput2();
}