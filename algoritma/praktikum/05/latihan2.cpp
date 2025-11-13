#include <iostream>
using namespace std;
int main(){
    char c;
    int x, y;

    cout << "Masukkan dua buah angka : ";
    cin >> x >> y;

    cout << "Pilih operator (+,-,*,/) yang anda inginkan: ";
    cin >> c;

    switch (c) {
        case '+':
            cout << x << " + " << y << " = " << x + y <<endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << x - y <<endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << x * y <<endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << x / y <<endl;
            break;
        default:
            cout << "Permintaan anda tidak sesuai!" << endl;
    }
    return 0;
}