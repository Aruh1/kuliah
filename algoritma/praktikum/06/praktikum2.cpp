#include <iostream>
using namespace std;

int main() {
    int n;
    int total = 0;
    int i = 1;

    cout << "2518049 - Rizki Pratama" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "===================================" << endl;
    cout << "Jumlah deret yang diinginkan: ";
    cin >> n;

    while (i <= n) {
        total += i;
        cout << i;

        if (i < n) {
            cout << " + ";
        }

        i++;
    }

    cout << " = " << total << endl;

    return 0;
}