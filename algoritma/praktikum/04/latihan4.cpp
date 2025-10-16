#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan sebuah angka: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "Angka adalah genap." << endl;
    } else {
        cout << "Angka adalah ganjil." << endl;
    }

    cout << "Masukkan sebuah angka: ";
    cin >> b;

    if (b % 2 == 0) {
        cout << "Angka adalah genap." << endl;
    } else {
        cout << "Angka adalah ganjil." << endl;
    }

    return 0;

}