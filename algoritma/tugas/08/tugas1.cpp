#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float nilai, total = 0, rataRata;
    float nilaiTertinggi, nilaiTerendah;
    int i = 1;

    cout << "Masukkan nilai untuk 5 siswa." << endl;
    while (i <= 5) {
        cout << "Masukkan nilai siswa ke-" << i << ": ";
        cin >> nilai;
        total += nilai;

        if (i == 1) {
            nilaiTertinggi = nilai;
            nilaiTerendah = nilai;
        } else {
            if (nilai > nilaiTertinggi) {
                nilaiTertinggi = nilai;
            }
            if (nilai < nilaiTerendah) {
                nilaiTerendah = nilai;
            }
        }
        i++;
    }

    rataRata = total / 5;

    cout << "Hasil Statistik:" << endl;
    cout << fixed << setprecision(2); 
    cout << "Rata-rata Nilai : " << rataRata << endl;
    cout << "Nilai Tertinggi : " << nilaiTertinggi << endl;
    cout << "Nilai Terendah  : " << nilaiTerendah << endl;

    return 0;
}