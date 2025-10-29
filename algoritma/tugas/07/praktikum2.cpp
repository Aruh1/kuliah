#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama, namaKelas, namaDosen, jadwal;
    char kodeKelas;
    int nim;

    cout << "=== SISTEM PENDAFTARAN KELAS PRAKTIKUM ===" << endl;
    
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "\nKode Kelas:" << endl;
    cout << "A = Dasar Pemrograman" << endl;
    cout << "B = Struktur Data" << endl;
    cout << "C = Algoritma dan Pemrograman" << endl;
    cout << "Masukkan Kode Kelas [A/B/C]: ";
    cin >> kodeKelas;

    switch (kodeKelas) {
        case 'A':
            namaKelas = "Dasar Pemrograman";
            namaDosen = "Dr. Andi";
            jadwal = "Senin, 08:00 - 10:00";
            break;
        case 'B':
            namaKelas = "Struktur Data";
            namaDosen = "Prof. Budi";
            jadwal = "Rabu, 10:00 - 12:00";
            break;
        case 'C':
            namaKelas = "Algoritma dan Pemrograman";
            namaDosen = "Dr. Siti";
            jadwal = "Jumat, 13:00 - 15:00";
            break;
        default:
            cout << "Kode kelas tidak valid" << endl;
            return 1;
    }

    cout << "\n=== DETAIL KELAS ===" << endl;
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "NIM Mahasiswa: " << nim << endl;
    cout << "Kelas: " << namaKelas << endl;
    cout << "Dosen: " << namaDosen << endl;
    cout << "Jadwal: " << jadwal << endl;

    return 0;
}