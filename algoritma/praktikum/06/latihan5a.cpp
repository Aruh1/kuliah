#include <iostream>
using namespace std;

int main() {
    char x;
    int y =5, z = 7;

    for (x = 'M'; x >= 'I'; x--, y *= 3, z += 7) {
        cout << "Nilai x: " << x << endl;
        cout << "Nilai y: " << y << endl;
        cout << "Nilai z: " << z << endl;
        cout << "------------------------" << endl;
    }
    return 0;
}