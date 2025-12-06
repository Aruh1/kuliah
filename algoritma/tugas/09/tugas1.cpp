#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float nilai;
    
    float totalSemua = 0;
    float maxSemua, minSemua;
    
    float totalKelas;
    float maxKelas, minKelas;
    char namaKelas = 'A';
    
    for (int i = 0; i < 3; i++) {
        totalKelas = 0;
        
        cout << "Input Nilai untuk KELAS " << (char)(namaKelas + i) << endl;
        for (int j = 1; j <= 5; j++) {
            cout << "Nilai Siswa ke-" << j << ": ";
            cin >> nilai;

            totalKelas += nilai;
            totalSemua += nilai;

            if (j == 1) {
                maxKelas = nilai;
                minKelas = nilai;
            } else {
                if (nilai > maxKelas) maxKelas = nilai;
                if (nilai < minKelas) minKelas = nilai;
            }

            if (i == 0 && j == 1) {
                maxSemua = nilai;
                minSemua = nilai;
            } else {
                if (nilai > maxSemua) maxSemua = nilai;
                if (nilai < minSemua) minSemua = nilai;
            }
        }

        cout << ">> Statistik Kelas " << (char)(namaKelas + i) << ":" << endl;
        cout << fixed << setprecision(2);
        cout << "   Rata-rata Kelas : " << (totalKelas / 5) << endl;
        cout << "   Nilai Tertinggi : " << maxKelas << endl;
        cout << "   Nilai Terendah  : " << minKelas << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Rata-rata Seluruh Siswa : " << (totalSemua / 15) << endl;
    cout << "Nilai Tertinggi Total   : " << maxSemua << endl;
    cout << "Nilai Terendah Total    : " << minSemua << endl;

    return 0;
}
