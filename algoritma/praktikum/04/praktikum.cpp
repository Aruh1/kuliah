#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaPemilik;
    int pilihanMobil, tahunPembuatan, bulanKeterlambatan;
    long long pajakDasar = 0, denda = 0, totalBayar = 0;

    cout << "=== Sistem Pajak Kendaraan ===" << endl;

    cout << "Masukkan nama pemilik: ";
    getline(cin, namaPemilik);

    cout << "\n Pilih Jenis Mobil" << endl;
    cout << "1. Sedan\t\tPajak Dasar Rp2.000.000" << endl;
    cout << "2. SUV\t\t\tPajak Dasar Rp2.500.000" << endl;
    cout << "3. Pickup\t\tPajak Dasar Rp1.500.000" << endl;
    cout << "4. Sport Car\t\tPajak Dasar Rp5.000.000" << endl;
    cout << "5. Bus\t\t\tPajak Dasar Rp3.000.000" << endl << endl;

    cout << "Masukkan pilihan mobil (1-5): ";
    cin >> pilihanMobil;

    if (pilihanMobil == 1) {
        cout << "Kamu memilih Sedan." << endl;
        pajakDasar = 2000000;
    } else if (pilihanMobil == 2) {
        cout << "Kamu memilih SUV." << endl;
        pajakDasar = 2500000;
    } else if (pilihanMobil == 3) {
        cout << "Kamu memilih Pickup." << endl;
        pajakDasar = 1500000;
    } else if (pilihanMobil == 4) {
        cout << "Kamu memilih Sport Car." << endl;
        pajakDasar = 5000000;
    } else if (pilihanMobil == 5) {
        cout << "Kamu memilih Bus." << endl;
        pajakDasar = 3000000;
    } else {
        cout << "Pilihan tidak valid." << endl;
        return 1;
    }

    cout << "Masukkan tahun pembuatan mobil: ";
    cin >> tahunPembuatan;

    cout << "Berapa bulan keterlambatan bayar pajak? ";
    cin >> bulanKeterlambatan;

    if (bulanKeterlambatan == 0) {
        denda = 0;
    } else if (bulanKeterlambatan >= 1 && bulanKeterlambatan <= 2) {
        denda = 0.05 * pajakDasar;
    } else if (bulanKeterlambatan >= 3 && bulanKeterlambatan <= 5) {
        denda = 0.10 * pajakDasar;
    } else if (bulanKeterlambatan >= 6 && bulanKeterlambatan <= 11) {
        denda = 0.25 * pajakDasar;
    } else if (bulanKeterlambatan >= 12) {
        denda = 0.50 * pajakDasar;
    }
    
    totalBayar = pajakDasar + denda;

    cout << "\n=== STRUK PEMBAYARAN PAJAK ===" << endl;
    cout << "Nama Pemilik \t: " << namaPemilik << endl;
    cout << "Tahun Mobil \t: " << tahunPembuatan << endl;
    cout << "Pajak Dasar \t: Rp" << pajakDasar << endl;
    cout << "Denda Telat \t: Rp" << denda << endl;
    cout << "Total Bayar \t: Rp" << totalBayar << endl;
    cout << "================================" << endl;
    cout << "Terima kasih telah membayar pajak kendaraan!" << endl;

    return 0;
}