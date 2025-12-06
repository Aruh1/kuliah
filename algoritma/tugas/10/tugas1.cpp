#include <iostream>
using namespace std;

void tampilkanJudul() {
    cout << "=======================================" << endl;
    cout << "   PROGRAM MENGHITUNG LUAS PERSEGI    " << endl;
    cout << "=======================================" << endl;
}

int hitungLuas(int p, int l) {
    int hasil = p * l;
    return hasil;
}

int main() {
    int panjang, lebar, luas;
    tampilkanJudul();
    cout << "Masukkan Panjang: ";
    cin >> panjang;
    cout << "Masukkan Lebar: ";
    cin >> lebar;
    luas = hitungLuas(panjang, lebar);
    cout << "Luas Persegi Panjang: " << luas << endl;

    return 0;
}