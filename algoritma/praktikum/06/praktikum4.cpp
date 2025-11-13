#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "2518049 - Rizki Pratama" << endl;
    cout << "===== Deret Campur Logika =====" << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            cout << (i * 2) << " ";
        } else if (i % 3 == 0) {
            cout << (i + 3) << " ";
        } else {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}