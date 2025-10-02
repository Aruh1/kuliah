#include <iostream>
using namespace std;

int main() {
    int tugas, uts, uas;
    float nilai_akhir;
    string nim;

    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    cout << "Masukkan NIM: ";
    cin >> nim;

    nilai_akhir = (tugas + uts + uas) / 3.0;

    cout << "Nilai akhir: " << nilai_akhir << " " << nim << endl;
    return 0;
}

