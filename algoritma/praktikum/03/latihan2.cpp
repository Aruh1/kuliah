#include <iostream>
using namespace std;

int main() {
    float a, b, l, k;

    cout << "Masukkan Panjang persegi panjang: ";
    cin >> a;

    cout << "Masukkan Lebar persegi panjang: ";
    cin >> b;

    l = a * b;
    k = 2 * (a + b);

    cout << "Luas persegi panjang: " << l << endl;
    cout << "Keliling persegi panjang: " << k << endl;
}