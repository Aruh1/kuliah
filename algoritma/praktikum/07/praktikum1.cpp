#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int nim_terakhir;
    int ukuran;

    cout << "Masukkan 1 angka paling belakang NIM Anda: ";
    cin >> nim_terakhir;

    if (nim_terakhir % 2 == 0) {
        ukuran = nim_terakhir + 4;
    } else {
        ukuran = nim_terakhir + 5;
    }

    cout << "----------------------------------" << endl;
    cout << "Angka NIM: " << nim_terakhir << (nim_terakhir % 2 == 0 ? " (Genap)" : " (Ganjil)") << endl;
    cout << "Ukuran yang digunakan (NIM + " << (nim_terakhir % 2 == 0 ? "4" : "5") << "): " << ukuran << endl;
    cout << "----------------------------------" << endl << endl;
    cout << "1. Membuat Kotak Angka Diagonal" << endl;
    cout << "Ukuran kotak: " << ukuran << endl;
    cout << "==================================" << endl;

    for (int i = 1; i <= ukuran; i++) {
        for (int j = 1; j <= ukuran; j++) {
            if (i == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "2. Membuat Segitiga Terbalik Genap" << endl;
    cout << "Ukuran segitiga: " << ukuran << endl;
    cout << "==================================" << endl;

    int i_while = ukuran;
    while (i_while >= 1) {
        
        int j_while = 1;
        int angkaGenap = 2;

        while (j_while <= i_while) {
            cout << setw(3) << angkaGenap;
            angkaGenap += 2;
            j_while++;
        }
        cout << endl;
        i_while--;
    }
    cout << endl;

    cout << "3. Membuat Segitiga Siku-siku Huruf" << endl;
    cout << "Ukuran segitiga siku-siku: " << ukuran << endl;
    cout << "==================================" << endl;

    int i_do = 1;
    do {
        
        int j_do = 1;
        char huruf = 'A';

        do {
            cout << huruf << " ";
            huruf++;
            j_do++;
        } while (j_do <= i_do);

        cout << endl;
        i_do++;
    } while (i_do <= ukuran);

    return 0;
}