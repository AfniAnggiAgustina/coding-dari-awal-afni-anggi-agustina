#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
int luas,keliling;
int alas,tinggi,sisi;
    cout << "Aplikasi Hitung luas & keliling segitiga"<<endl;
    cout << "Masukan alas"; cin >> alas;
    cout << "Masukan tinggi"; cin >> tinggi;
    luas = 0.5* alas * tinggi;
    cout << "Luas segitiga=" << luas;
}