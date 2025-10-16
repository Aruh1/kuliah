#include <iostream>
using namespace std;

int main() {
    int bil;
    cout << "Masukkan sebuah bilangan bulat";
    cout << " yang diperiksa : ";
    cin >> bil;

    if (bil > 0) {
        cout << bil << " adalah bilangan positif." << endl;
    } else if (bil < 0) {
        cout << bil << " adalah bilangan negatif." << endl;
    } else {
        cout << "Anda memasukkan nol." << endl;
    }
    
    return 0;
}