#include <iostream>
using namespace std;

int main() {
    int nilai_pertama, nilai_kedua;

    cout << "Masukkan nilai pertama (dua digit NIM Anda): ";
    cin >> nilai_pertama;

    cout << "Masukkan nilai kedua (dua digit NIM pengajar): ";
    cin >> nilai_kedua;

    if ((nilai_pertama > 60) & (nilai_kedua > 60)) {
        cout << "\nSelamat, Anda LULUS!" << endl;
    } else {
        cout << "\nMaaf, Anda TIDAK LULUS." << endl;
    }

    return 0;
}