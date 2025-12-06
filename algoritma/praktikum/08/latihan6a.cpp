#include <iostream>
using namespace std;

string nama() {
    string user;
    cout << "Masukkan nama Anda: ";
    getline(cin, user);
    return user;
}

void judul() {
    cout << "aplikasi konversi mata uang negara" << endl;
    cout << "Nama Pengguna: " << nama() << endl;
}

int pilihMataUang() {
    int pilihan;
    cout << "Pilih mata uang yang akan dikonversi:" << endl;
    cout << "1. Dollar" << endl;
    cout << "2. Euro" << endl;
    cout << "3. Yen" << endl;
    cout << "4. Ringgit" << endl;
    cout << "5. Won" << endl;
    cout << "Masukkan pilihan (1-5): ";
    cin >> pilihan;
    return pilihan;
}

double konversi() {
    int pilihan = pilihMataUang();
    double jumlah, hasil;
    cout << "Masukkan jumlah dalam Rupiah: ";
    cin >> jumlah;

    cout << "Harga Rupiah: " << jumlah << endl;

    switch (pilihan) {
        case 1:
            hasil = jumlah / 16000;
            cout << "Hasil konversi ke Dollar: " << hasil << endl;
            break;
        case 2:
            hasil = jumlah / 17500; 
            cout << "Hasil konversi ke Euro: " << hasil << endl;
            break;
        case 3:
            hasil = jumlah / 110;
            cout << "Hasil konversi ke Yen: " << hasil << endl;
            break;
        case 4:
            hasil = jumlah / 3500;
            cout << "Hasil konversi ke Ringgit: " << hasil << endl;
            break;
        case 5:
            hasil = jumlah / 12;
            cout << "Hasil konversi ke Won: " << hasil << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }
}

int main() {
    judul();
    konversi();
    return 0;
}