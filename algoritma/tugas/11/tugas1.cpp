#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    float total = 0;
    float rataRata;
    int min, max;

    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << (i + 1) << ": ";
        cin >> nilai[i];
    }
    min = nilai[0];
    max = nilai[0];

    for (int i = 0; i < 5; i++) {
        total = total + nilai[i];

        if (nilai[i] > max) {
            max = nilai[i];
        }

        if (nilai[i] < min) {
            min = nilai[i];
        }
    }

    rataRata = total / 5;
    cout << "Nilai Rata-rata : " << rataRata << endl;
    cout << "Nilai Tertinggi : " << max << endl;
    cout << "Nilai Terendah  : " << min << endl;

    return 0;
}