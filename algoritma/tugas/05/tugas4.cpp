#include <iostream>
#include <string>

using namespace std;

int main() {
    string pilihanMakanan, pilihanMinuman;
    int kodeMakanan, kodeMinuman;
    int jmlMakanan = 0, jmlMinuman = 0;
    int hargaSatuanMakanan = 0, hargaSatuanMinuman = 0;
    long totalHarga = 0;
    string namaMakanan = "", namaMinuman = "";

    cout << "Aplikasi Menu Makanan" << endl;

    cout << "Pilih Menu Makanan = Ya, jika tidak maka ke menu minuman (Ya/Tidak) : ";
    cin >> pilihanMakanan;

    if (pilihanMakanan == "Ya" || pilihanMakanan == "ya") {
        cout << "1. Pecel     (Rp.10.000)" << endl;
        cout << "2. Rawon     (Rp.15.000)" << endl;
        cout << "3. Soto      (Rp.12.000)" << endl;
        cout << "4. Nasi Campur (Rp.13.000)" << endl;

        cout << "Masukkan Pilihan Makanan : ";
        cin >> kodeMakanan;
        cout << "Masukkan Jumlah Makanan yang dipesan = ";
        cin >> jmlMakanan;

        switch (kodeMakanan) {
            case 1:
                namaMakanan = "Pecel";
                hargaSatuanMakanan = 10000;
                break;
            case 2:
                namaMakanan = "Rawon";
                hargaSatuanMakanan = 15000;
                break;
            case 3:
                namaMakanan = "Soto";
                hargaSatuanMakanan = 12000;
                break;
            case 4:
                namaMakanan = "Nasi Campur";
                hargaSatuanMakanan = 13000;
                break;
            default:
                cout << "Pilihan makanan tidak valid." << endl;
                jmlMakanan = 0;
                break;
        }
        totalHarga += (hargaSatuanMakanan * jmlMakanan);
    }

    cout << "Piliha Menu Minuman = Ya (Ya/Tidak) : ";
    cin >> pilihanMinuman;

    if (pilihanMinuman == "Ya" || pilihanMinuman == "ya") {
        cout << "1. Kopi      (Rp.4000)" << endl;
        cout << "2. Susu      (Rp.5000)" << endl;
        cout << "3. Teh       (Rp.3000)" << endl;
        cout << "4. Kopi susu (Rp.5000)" << endl;

        cout << "Masukkan pilihan Minuman : ";
        cin >> kodeMinuman;
        cout << "Masukkan jumlah Minuman yang dipesan = ";
        cin >> jmlMinuman;

        switch (kodeMinuman) {
            case 1:
                namaMinuman = "Kopi";
                hargaSatuanMinuman = 4000;
                break;
            case 2:
                namaMinuman = "Susu";
                hargaSatuanMinuman = 5000;
                break;
            case 3:
                namaMinuman = "Teh";
                hargaSatuanMinuman = 3000;
                break;
            case 4:
                namaMinuman = "Kopi susu";
                hargaSatuanMinuman = 5000;
                break;
            default:
                cout << "Pilihan minuman tidak valid." << endl;
                jmlMinuman = 0;
                break;
        }
        totalHarga += (hargaSatuanMinuman * jmlMinuman);
    }

    if (jmlMakanan > 0 && jmlMinuman > 0) {
        cout << "Yang anda pesan : " << namaMakanan << "(" << jmlMakanan << ") dan "
             << namaMinuman << "(" << jmlMinuman << "), total harga = Rp." << totalHarga << endl;
    } else if (jmlMakanan > 0 && jmlMinuman == 0) {
        cout << "Yang anda pesan : " << namaMakanan << "(" << jmlMakanan << "), total harga = Rp." << totalHarga << endl;
    } else if (jmlMakanan == 0 && jmlMinuman > 0) {
        cout << "Yang anda pesan : " << namaMinuman << "(" << jmlMinuman << "), total harga = Rp." << totalHarga << endl;
    } else {
        cout << "Default : Anda tidak pesan makanan dan minuman." << endl;
    }

    return 0;
}