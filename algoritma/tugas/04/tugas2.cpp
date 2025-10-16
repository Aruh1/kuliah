#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 == 0) {
        cout << "Bilangan ini genap." << endl;
    } else {
        cout << "Bilangan ini ganjil." << endl;
    }

    return 0;
}
