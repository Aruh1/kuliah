#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 12 % 5;
    bool c;
    
    c = a == b;
    cout << c << endl;
    
    c = a != b;
    cout << c << endl;

    c = !c;
    cout << c << endl;
}
