#include <iostream>
using namespace std;

int main() {
    int angka[4] = {10, 25, 50, 75};
    int jumlahData = 4;

    cout << "Menampilkan isi Array" << endl;

    for(int i = 0; i < jumlahData; ++i) {
        cout << "Data pada indeks ke-" << i + 1 << ": " << angka[i] << endl;
    }
    cout << "Semua data telah ditampilkan." << endl;
    return 0;
}