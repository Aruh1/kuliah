#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran kotak: "; cin >> n;
    int i = 0; 
    do {
        int j = 1; 
        do {
            int angka = ((i + j - 1) % n) + 1;
            cout << angka << " ";
            j++;
        } while (j <= n);
        cout << endl;
        i++;
    } while (i < n);
    return 0;
}