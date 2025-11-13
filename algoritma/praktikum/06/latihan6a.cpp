#include <iostream>
#include <string>
using namespace std;

int main() {
    int nim, tebakan;
    int angka_rahasia = 8;
    string nama;
    cout << "Input namamu: ";
        getline(cin, nama);
        
        cout << "Input NIM-mu: ";
        cin >> nim;
        cout << nim << " || " << nama << endl;

        cout << "Tebak angka antara 1-10: "; cin >> tebakan;
    
    while(tebakan != angka_rahasia) {
        cout << "Salah! Tebak lagi: ";
        cin >> tebakan;
    }
    cout << "Benar! Angka rahasianya adalah " << angka_rahasia;
}
