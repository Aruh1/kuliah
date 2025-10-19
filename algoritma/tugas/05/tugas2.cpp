#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: "; cin >> nilai;

    switch (nilai) {
        case 80 ... 100:
            cout << "A" << endl;
            break;
        case 70 ... 79:
            cout << "B" << endl;
            break;
        case 60 ... 69:
            cout << "C" << endl;
            break;
        case 40 ... 59:
            cout << "D" << endl;
            break;
        case 0 ... 39:
            cout << "E" << endl;
            break;
        default:
            cout << "Nilai tidak terdefinisi" << endl;
            break;
    }
    return 0;
}