#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, ukuran;
    char kodeUkuran;
    int jumlahPesanan, nim, harga, totalHarga;
    
    cout << "Pesan Baju PDH" << endl;
    cout << "Masukkan Nama: ";
    getline(cin, nama);

    cout << "Masukkan NIM: ";
    cin >> nim;

    cout << "Ukuran PDH:" << endl;
    cout << "S - Small (Rp. 150.000)" << endl;
    cout << "M - Medium (Rp. 160.000)" << endl;
    cout << "L - Large (Rp. 170.000)" << endl;
    cout << "Masukkan Kode Ukuran (S/M/L): ";
    cin >> kodeUkuran;

    cout << "Masukkan Jumlah Pesanan: ";
    cin >> jumlahPesanan;

    switch (kodeUkuran) {
        case 'S':
        case 's':
            ukuran = "Small";
            harga = 150000;
            break;
        case 'M':
        case 'm':
            ukuran = "Medium";
            harga = 160000;
            break;
        case 'L':
        case 'l':
            ukuran = "Large";
            harga = 170000;
            break;
        default:
            cout << "Kode ukuran tidak valid!" << endl;
            return 1;
    }

    totalHarga = harga * jumlahPesanan;

    cout << "Struk Pemesanan PDH" << endl;
    cout << "---------------------" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Ukuran PDH: " << ukuran << endl;
    cout << "Jumlah: " << jumlahPesanan << endl;
    cout << "Total Harga: " << totalHarga << endl;
    cout << "---------------------" << endl;
    cout << "Terima kasih atas pesanan Anda!" << endl;

    return 0;
}
