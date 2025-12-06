#include <iostream>
using namespace std;

int main() {
    int jumlahSiswa;
    float nilai, totalNilai = 0, rataRata;

    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;

    if (jumlahSiswa <= 0) {
        cout << "Jumlah siswa harus lebih dari 0." << endl;
        return 0;
    }

    for (int i = 1; i <= jumlahSiswa; i++) {
        cout << "Masukkan nilai siswa ke-" << i << ": ";
        cin >> nilai;
        totalNilai += nilai;
    }

    rataRata = totalNilai / jumlahSiswa;

    cout << "------------------------------------------" << endl;
    cout << "Total Nilai : " << totalNilai << endl;
    cout << "Rata-rata   : " << rataRata << endl;

    return 0;
}
