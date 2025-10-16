#include <iostream>
using namespace std;

int main() {
    int sepatu, aksesoris;
    double harga;

    cout << "Toko Sepatu Trendy" << endl << endl;
    cout << "Daftar Sepatu" << endl;
    cout << "1. Nike Air Zoom = Rp 150000" << endl;
    cout << "2. Adidas Ultraboost = Rp 180000" << endl;
    cout << "3. Converse Classic = Rp 130000" << endl << endl;

    cout << "Aksesoris Sepatu" << endl;
    cout << "1. Kaos Kaki Premium = Rp 30000" << endl;
    cout << "2. Tali Sepatu Warna = Rp 20000" << endl;
    cout << "3. Tas Sepatu = Rp 50000" << endl << endl;

    cout << "Pilih Sepatu (1-3): ";
    cin >> sepatu;
    cout << "Pilih Aksesoris (1-3): ";
    cin >> aksesoris;

    if (sepatu == 1) {
        cout << "Anda memilih Nike Air Zoom." << endl;
        harga = 150000;
    } else if (sepatu == 2) {
        cout << "Anda memilih Adidas Ultraboost." << endl;
        harga = 180000;
    } else if (sepatu == 3) {
        cout << "Anda memilih Converse Classic." << endl;
        harga = 130000;
    } else {
        cout << "Pilihan sepatu tidak valid." << endl;
        return 1;
    }

    if (aksesoris == 1) {
        cout << "Anda memilih Kaos Kaki Premium." << endl;
        harga += 30000;
    } else if (aksesoris == 2) {
        cout << "Anda memilih Tali Sepatu Warna." << endl;
        harga += 20000;
    } else if (aksesoris == 3) {
        cout << "Anda memilih Tas Sepatu." << endl;
        harga += 50000;
    } else {
        cout << "Pilihan aksesoris tidak valid." << endl;
        return 1;
    }

    if (harga > 220000) {
        harga *= 0.88;
        cout << "Selamat! Anda mendapatkan diskon 12%." << endl;
    }

    cout << "Total Harga: Rp " << harga << endl;
    cout << "Terima kasih telah berbelanja di Toko Sepatu Trendy!" << endl;

    return 0;

}