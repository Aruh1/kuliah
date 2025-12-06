#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    if( tinggi % 2 == 0 ) {
        cout << "Maaf, cuma menerima ganjil saja";
        return 0;
    } else {
        tinggi = tinggi;
    }

    int i = 1;
    while(i <= tinggi) {
        int j = 1;
        while(j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    i = tinggi - 1;
    while(i >= 1) {
        int j = 1;
        while(j <= i) {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i--;
    }
}