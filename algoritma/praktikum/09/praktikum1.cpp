#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void garis() {
    for(int i = 0; i < 65; i++) {
        cout << "=";
    }
    cout << endl;
}

int main() {
    string dataKamar[100][2];
    int hargaKamar[100][1];
    
    int jumlahKamar;
    int totalTerisi = 0;
    int totalKosong = 0;
    long long totalPendapatan = 0;

    cout << "=== PROGRAM MANAJEMEN KAMAR HOTEL ===" << endl;
    cout << "Masukkan jumlah kamar: ";
    cin >> jumlahKamar;

    cout << "\n--- INPUT DATA KAMAR HOTEL ---" << endl;

    for (int i = 0; i < jumlahKamar; i++) {
        cout << "\nKamar ke-" << (i + 1) << endl;
        
        cout << "Nomor kamar: ";
        cin >> dataKamar[i][0];
        
        cout << "Status (Terisi/Kosong): ";
        cin >> dataKamar[i][1];
        
        cout << "Harga per malam (angka): ";
        cin >> hargaKamar[i][0];
    }

    cout << "\n--- DATA KAMAR HOTEL ---" << endl;
    garis();
    cout << left << setw(5) << "No" 
         << "| " << setw(13) << "Nomor Kamar" 
         << "| " << setw(15) << "Status" 
         << "| " << "Harga per Malam" << endl;
    garis();

    for (int i = 0; i < jumlahKamar; i++) {
        cout << left << setw(5) << (i + 1)
             << "| " << setw(13) << dataKamar[i][0]
             << "| " << setw(15) << dataKamar[i][1]
             << "| " << hargaKamar[i][0] << endl;

        if (dataKamar[i][1] == "Terisi") {
            totalTerisi++;
            totalPendapatan += hargaKamar[i][0];
        } else {
            totalKosong++;
        }
    }
    garis();

    cout << "\nTotal kamar terisi   : " << totalTerisi << endl;
    cout << "Total kamar kosong   : " << totalKosong << endl;
    cout << "Total pendapatan     : Rp " << totalPendapatan << endl;

    return 0;
}