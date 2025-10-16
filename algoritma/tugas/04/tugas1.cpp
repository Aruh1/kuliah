#include <iostream>
#define PI 3.14
using namespace std;

int main() {
    double panjang, lebar, jari_jari, luasPersegiPanjang, luasLingkaran;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari_jari;

    luasPersegiPanjang = panjang * lebar;
    luasLingkaran = PI * jari_jari * jari_jari;

    cout << "\nLuas persegi panjang = " << luasPersegiPanjang << endl;
    cout << "Luas lingkaran = " << luasLingkaran << endl;

    if (luasLingkaran > luasPersegiPanjang) {
        cout << "Lingkaran lebih besar dari persegi panjang." << endl;
    } else if (luasPersegiPanjang > luasLingkaran) {
        cout << "Persegi panjang lebih luas dari lingkaran." << endl;
    } else {
        cout << "Luas lingkaran dan persegi panjang sama besar." << endl;
    }

    return 0;
}
