#include <iostream>
using namespace std;

void hitung(int a) {
    int hasil;
    hasil = a * a;
    cout << hasil;
}

void panggil() {
    return hitung(2);
}

int main() {
    panggil();
    return 0;
}