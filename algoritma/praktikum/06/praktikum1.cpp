#include <iostream>
using namespace std;

int main() {
    int n;
    long long faktorial = 1;

    cout << "2518049 - Rizki Pratama" << endl;
    cout << "## Program C++ Hitung Faktorial ##" << endl;
    cout << "==================================" << endl;
    cout << "Input angka: ";
    cin >> n;

    cout << n << "! = ";

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
        cout << i;

        if (i < n) {
            cout << " * ";
        }
    }

    cout << " = " << faktorial << endl;

    return 0;
}