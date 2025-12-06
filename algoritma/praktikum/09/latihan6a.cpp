#include <iostream>
using namespace std;

int main() {
    string dataObat[100][2];
    int jumlah;

    cout << "Program Manajemen Obat\n";
    cout << "Masukkan Jumlah obat yang akan diinput: "; cin >> jumlah;
    for(int i = 0; i < jumlah; i++) {
        cout << "\nInput Data Obat ke-" << i + 1 << ":\n";
        cout << "Nama Obat: "; cin >> dataObat[i][0];
        cout << "Jumlah Obat: "; cin >> dataObat[i][1];
    }

    cout << "No | Nama Obat | Jumlah Obat\n";
    for(int i = 0; i < jumlah; i++) {
        cout << i + 1 << "|" << dataObat[i][0] << "|" << dataObat[i][1] << endl;
    }
}
