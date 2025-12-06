#include <iostream>
using namespace std;

void contoh(int angka, string kata) {
    string temp;
    temp = cout << kata << " " << angka;
    return temp;
}

int main() {
    int angka;
    string kata;
    angka = 2025;
    kata = "Teknik Informatika";
    contoh(kata, angka);
    return 0;
}