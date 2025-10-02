#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 4, c;
    
    c = a + b++;
    c = c;

    cout << c << endl;
}
