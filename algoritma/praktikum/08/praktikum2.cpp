#include <iostream>
#include <string>
using namespace std;

int pilihanLayanan;

const int TARIF_SETRIKA = 7000;
const int TARIF_BIASA = 5000;

int Garis() {
    cout << endl;
    for(int i = 0; i < 40; i++) {
        cout << "=";
    }
    cout << endl;
    return 1;
}

void tampilkanTarif() {
    cout << endl;
    Garis();
    cout << "Tarif Laundry per Kg:" << endl;
    cout << "Cuci + Setrika: Rp " << TARIF_SETRIKA << "/kg" << endl;
    cout << "Cuci Biasa    : Rp " << TARIF_BIASA << "/kg" << endl;
    Garis();
}

void dataPelanggan(string &nama) {
    string noHp;
    cout << "Masukan Nama Pelanggan : ";
    getline(cin, nama);
    cout << "Masukan No. HP         : ";
    cin >> noHp;
    cout << "Selamat datang, " << nama << "!" << endl;
    Garis();
}

int hitungCuciSetrika(int berat) {
    return berat * TARIF_SETRIKA;
}

int hitungCuciBiasa(int berat) {
    return berat * TARIF_BIASA;
}

int main() {
    string namaPelanggan;
    int berat, totalBiaya;

    dataPelanggan(namaPelanggan);

    cout << "Pilih Jenis Layanan :" << endl;
    cout << "1. Cuci + Setrika" << endl;
    cout << "2. Cuci Biasa" << endl;
    cout << "Pilihanmu = ";
    cin >> pilihanLayanan;
    
    Garis();

    if (pilihanLayanan == 1) {
        cout << "Pilihanmu adalah Cuci + Setrika" << endl;
        cout << "Masukkan berat pakaian (kg): ";
        cin >> berat;
        
        totalBiaya = hitungCuciSetrika(berat);
        
        cout << "Biaya Laundry = Rp " << totalBiaya << endl;
        cout << "Detail: " << berat << " kg x Rp " << TARIF_SETRIKA << endl;
        
    } else if (pilihanLayanan == 2) {
        cout << "Pilihanmu adalah Cuci Biasa" << endl;
        cout << "Masukkan berat pakaian (kg): ";
        cin >> berat;
        
        totalBiaya = hitungCuciBiasa(berat);
        
        cout << "Biaya Laundry = Rp " << totalBiaya << endl;
        cout << "Detail: " << berat << " kg x Rp " << TARIF_BIASA << endl;
        
    } else {
        cout << "Pilihan layanan tidak tersedia." << endl;
    }

    tampilkanTarif();

    return 0;
}