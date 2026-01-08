#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int jumMhs, jumMK;

    cout << "Masukkan Jumlah Mahasiswa   : ";
    cin >> jumMhs;
    cout << "Masukkan Jumlah Mata Kuliah : ";
    cin >> jumMK;
    cout << "----------------------------------------" << endl;

    float nilai[jumMhs][jumMK];

    for (int i = 0; i < jumMhs; i++) {
        cout << "Entri data Mahasiswa ke-" << (i + 1) << ":" << endl;
        for (int j = 0; j < jumMK; j++) {
            cout << "  - Nilai MK " << (j + 1) << ": ";
            cin >> nilai[i][j];
        }
        cout << endl;
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < jumMhs; i++) {
        float totalNilaiMhs = 0;
        for (int j = 0; j < jumMK; j++) {
            totalNilaiMhs += nilai[i][j];
        }
        float rataMhs = totalNilaiMhs / jumMK;
        cout << "Mahasiswa ke-" << (i + 1) << " : " << rataMhs << endl;
    }

    for (int j = 0; j < jumMK; j++) {
        float totalNilaiMK = 0;
        float maxNilai = -1;
        float minNilai = 101;

        for (int i = 0; i < jumMhs; i++) {
            float nilaiSaatIni = nilai[i][j];
            
            totalNilaiMK += nilaiSaatIni;

            if (nilaiSaatIni > maxNilai) {
                maxNilai = nilaiSaatIni;
            }

            if (nilaiSaatIni < minNilai) {
                minNilai = nilaiSaatIni;
            }
        }

        float rataMK = totalNilaiMK / jumMhs;

        cout << "Mata Kuliah ke-" << (j + 1) << ":" << endl;
        cout << "  > Rata-rata : " << rataMK << endl;
        cout << "  > Nilai Max : " << maxNilai << endl;
        cout << "  > Nilai Min : " << minNilai << endl;
        cout << "---------------------------------" << endl;
    }

    return 0;
}