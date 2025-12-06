#include <iostream>
using namespace std;

void garis() {
    for(int i = 0; i < 35; i++) {
        cout << "=";
    }
}

int main() {
    string kode[100], namaBarang[100];
    float harga[100];
    int stok[100], jumlah;

    cout << "Program Manajemen Data Barang\n";
    cout << "Masukkan Jumlah barang yang akan diinput: "; cin >> jumlah;
    for(int i = 0; i < jumlah; i++) {
        cout << "\nInput Data Barang ke-" << i + 1 << ":\n";
        cout << "Kode Barang: "; cin >> kode[i];
        cout << "Nama Barang: "; cin >> namaBarang[i];
        cout << "Harga Barang: "; cin >> harga[i];
        cout << "Stok Barang: "; cin >> stok[i];
    }

    cout << "No | Kode Barang | Nama Barang | Harga Barang | Stok Barang\n";
    for(int i = 0; i < jumlah; i++) {
        garis();
        cout << "\n" << i + 1 << "  | " << kode[i] << "          | " << namaBarang[i] << "        | " << harga[i] << "        | " << stok[i] << endl;
    }
}