#include <iostream>
#include <string>
using namespace std;

int pilihan;

int garis() {
    cout << endl;
    for(int i = 0; i < 40; i++) {
        cout << "=";
    }
    cout << endl;
    return 1;
}

void DataDiri() {
    string nama, nim;
    cout << "Masukan Nama Lengkap Anda : ";
    cin.ignore();
    getline(cin, nama);
    cout << "Masukan Nim Anda : ";
    cin >> nim;
}

void BangunDatar() {
    garis();
    cout << "=== BANGUN DATAR ===" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Lingkaran" << endl;
    cout << "5. Keluar" << endl;
    cout << "Masukan Pilihan Bangun Datar : ";
    cin >> pilihan;
}

void Hitung() {
    int jenisHitung;
    float h_luas, h_volume;
    float s, p, l, a, t, t_prisma, r;
    const float PHI = 3.14;

    string namaBangun;
    switch(pilihan) {
        case 1: namaBangun = "Persegi"; break;
        case 2: namaBangun = "Persegi Panjang"; break;
        case 3: namaBangun = "Segitiga"; break;
        case 4: namaBangun = "Lingkaran"; break;
        default: return;
    }

    cout << "Pilihan Anda Adalah " << namaBangun << endl;
    cout << "Kamu ingin Hitung Luas(1)/Volume(2) ? ";
    cin >> jenisHitung;

    switch(pilihan) {
        case 1:
            cout << "Masukan sisi : "; cin >> s;
            if (jenisHitung == 1) {
                h_luas = s * s;
                cout << "Luas Persegi : " << h_luas << endl;
            } else {
                h_volume = s * s * s;
                cout << "Volume Kubus : " << h_volume << endl;
            }
            break;

        case 2:
            cout << "Masukan panjang : "; cin >> p;
            cout << "Masukan lebar : "; cin >> l;
            if (jenisHitung == 1) {
                h_luas = p * l;
                cout << "Luas Persegi Panjang : " << h_luas << endl;
            } else {
                cout << "Masukan tinggi : "; cin >> t;
                h_volume = p * l * t;
                cout << "Volume Balok : " << h_volume << endl;
            }
            break;

        case 3:
            cout << "Masukan alas : "; cin >> a;
            cout << "Masukan tinggi segitiga : "; cin >> t;
            if (jenisHitung == 1) {
                h_luas = 0.5 * a * t;
                cout << "Luas Segitiga : " << h_luas << endl;
            } else {
                cout << "Masukan tinggi prisma : "; cin >> t_prisma;
                h_volume = (0.5 * a * t) * t_prisma;
                cout << "Volume Prisma Segitiga : " << h_volume << endl;
            }
            break;

        case 4:
            cout << "Masukan jari-jari : "; cin >> r;
            if (jenisHitung == 1) {
                h_luas = PHI * r * r;
                cout << "Luas Lingkaran : " << h_luas << endl;
            } else {
                cout << "Masukan tinggi tabung : "; cin >> t;
                h_volume = (PHI * r * r) * t;
                cout << "Volume Tabung : " << h_volume << endl;
            }
            break;
    }
}

int main() {
    char ulang;
    DataDiri();
    
    do {
        BangunDatar();
        
        if (pilihan >= 1 && pilihan <= 4) {
            Hitung();
            garis();
            cout << "Apakah ingin menghitung lagi? (y/n): ";
            cin >> ulang;
        } else if (pilihan == 5) {
            ulang = 'n';
        } else {
            cout << "Pilihan tidak valid!" << endl;
            ulang = 'y';
        }

    } while (ulang == 'y' || ulang == 'Y');

    cout << "SELAMAT KAMU TELAH MENYELESAIKAN LATIHAN !!!" << endl;
    return 0;
}