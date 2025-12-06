#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi ketupat: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = i; j < tinggi; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = tinggi - 1; i >= 1; i--) {
        for (int j = tinggi; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}