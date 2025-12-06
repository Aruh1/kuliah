#include <iostream>
using namespace std;

int hitung(int a, int b) {
    int c;
    c = a * b;
    return c;
}

int main() {
    int x, y;
    cout << "Nilai pertama: "; cin >> x;
    cout << "Nilai kedua: "; cin >> y;
    cout << "Hasil dari " << x << " X " << y << " = " << hitung(x, y) << endl;
    return 0;
}