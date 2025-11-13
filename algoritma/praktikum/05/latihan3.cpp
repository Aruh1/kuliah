#include <iostream>
#include <string>
using namespace std;

int main() {
    char kodeFilm;
    int KelasKursi, jumlahTiket, harga;
    string film;
    
    cout << "Kode Film:" << endl;
    cout << "A = Avengers: Endgame" << endl;
    cout << "S = Spider-Man: No Way Home" << endl;
    cout << "B = Batman: The Dark Knight" << endl;
    cout << "Masukkan kode film [A/S/B]: ";
    cin >> kodeFilm;

    switch (kodeFilm) {
        case 'A':
            film = "Avengers: Endgame";
            break;
        case 'S':
            film = "Spider-Man: No Way Home";
            break;
        case 'B':
            film = "Batman: The Dark Knight";
            break;
        default:
            cout << "Kode film tidak valid" << endl;
            break;
    }

    cout << "Kelas kursi:" << endl;
    cout << "1. VIP = Rp 100.000" << endl;
    cout << "2. Reguler = Rp 50.000" << endl;
    cout << "Pilih kelas [1/2]: ";
    cin >> KelasKursi;

    switch (KelasKursi) {
        case 1:
            cout << "Anda memilih kelas VIP" << endl;
            harga = 100000;
            break;
        case 2:
            cout << "Anda memilih kelas Reguler" << endl;
            harga = 50000;
            break;
        default:
            cout << "Kelas kursi tidak valid" << endl;
            break;
    }

    cout << "Masukkan jumlah tiket yang dibeli: ";
    cin >> jumlahTiket;

    cout << "Film : " << film << endl;
    cout << "Kelas Kursi : " << (KelasKursi == 1 ? "VIP" : "Reguler") << endl;
    cout << "Jumlah Tiket : " << jumlahTiket << endl;
    cout << "Total Harga : Rp " << (jumlahTiket * harga) << endl;

    return 0;
}