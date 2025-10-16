#include <iostream>
#define PI 22/7
using namespace std;

int main() {
    float jari_jari, tinggi, volume;

    cout << "=== Program Menghitung Volume Tabung ===" << endl;

    cout << "Masukkan jari-jari tabung: ";
    cin >> jari_jari;

    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;

    volume = PI * jari_jari * jari_jari * tinggi;

    cout << "\nVolume Tabung adalah: " << volume << endl;

    return 0;
}
