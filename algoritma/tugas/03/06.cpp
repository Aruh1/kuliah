#include <iostream>
using namespace std;

int main() {
    int a = 20 / 5, b = 12 % 5;
    bool c;

    c = (a>2) && (b>3);
    cout << c << endl;
    
    c = a == b;
    cout << c << endl;

    c = !c;
    cout << c << endl;

    c = c==true;
    cout << c << endl;
}
