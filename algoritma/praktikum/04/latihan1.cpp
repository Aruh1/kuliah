#include <iostream>
using namespace std;

int main() {
    int usia;
    cout << "Masukkan usia Anda: ";
    cin >> usia;

    if (usia < 17) {
        cout << "Anda belum memenuhi syarat mengendarai kendaraan." << endl;
    } else {
        cout << "Anda memenuhi syarat mengendarai kendaraan." << endl;
    }
    return 0;
}