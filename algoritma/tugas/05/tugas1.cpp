#include <iostream>
using namespace std;

int main() {
    int anak;
    cout << "Masukkan jumlah anak: "; cin >> anak;

    switch (anak) {
        case 0:
            cout << "Tidak ada tunjangan anak." << endl;
            break;
        case 1:
            cout << "Tunjangan anak 10%" << endl;
            break;
        case 2:
            cout << "Tunjangan anak 20%" << endl;
            break;
        default:
            cout << "Anak lebih dari 2 tunjangan tetap 20%" << endl;
            break;
    }
    return 0;
}