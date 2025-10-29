#include <iostream>
#include <string>
using namespace std;

int main() {
    int nim, harga, total, jumlahPorsi;
    char kodeMakanan;
    string nama, makanan;
    
    cout << "Program Pembelian Makanan Kantin" << endl << endl;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NIM Mahasiswa: ";
    cin >> nim;

    cout << "A = Nasi Goreng (Rp 15.000)" << endl;
    cout << "B = Ayam Geprek (Rp 18.000)" << endl;
    cout << "C = Mie Ayam (Rp 12.000)" << endl;
    cout << "Masukkan kode makanan [A/B/C]: ";
    cin >> kodeMakanan;

    cout << "Masukkan jumlah porsi yang dibeli: ";
    cin >> jumlahPorsi;

    switch (kodeMakanan) {
        case 'A':
            harga = 15000;
            makanan = "Nasi Goreng";
            break;
        case 'B':
            harga = 18000;
            makanan = "Ayam Geprek";
            break;
        case 'C':
            harga = 12000;
            makanan = "Mie Ayam";
            break;
        default:
            cout << "Kode makanan tidak valid" << endl;
            return 1;
    }

    total = harga * jumlahPorsi;

    cout << "\nStruk Pembelian" << endl << endl;

    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "NIM Mahasiswa: " << nim << endl;
    cout << "Makanan: " << makanan << " x" <<  jumlahPorsi << endl;
    cout << "Total Biaya: Rp " << total << endl;

    return 0;
}