#include <iostream>
using namespace std;

int p;
float hitungHitamPutih(int lembar) {
    float biaya = 200 * lembar;
    return biaya;
}
float hitungWarna(int lembar) {
    float biaya = 500 * lembar;
    return biaya;
}

void DataPelanggan() {
    string nama;
    string noHP;
    cout << "Masukkan Nama Pelanggan: ";
    getline(cin, nama);
    cout << "Masukkan No HP Pelanggan: ";
    getline(cin, noHP);
}

void garis() {
    for (int i = 0; i < 25; i++) {
        cout << "=";
    }
    cout << endl;
}

int main() {
    DataPelanggan();
    garis();
    cout << "Pilih jenis fotocopy: " << endl;
    cout << "1. Hitam Putih" << endl;
    cout << "2. Warna" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> p;
    garis();
    if (p == 1) {
        int lembar;
        cout << "Masukkan jumlah lembar fotocopy hitam putih: ";
        cin >> lembar;
        float total = hitungHitamPutih(lembar);
        cout << "Total biaya fotocopy hitam putih: Rp " << total << endl;
    } else if (p == 2) {
        int lembar;
        cout << "Masukkan jumlah lembar fotocopy warna: ";
        cin >> lembar;
        float total = hitungWarna(lembar);
        cout << "Total biaya fotocopy warna: Rp " << total << endl;
    } else {
        cout << "Pilihan tidak valid." << endl;
    }
    garis();
    cout << "Terima kasih telah menggunakan layanan fotocopy kami!" << endl;
    return 0;
}