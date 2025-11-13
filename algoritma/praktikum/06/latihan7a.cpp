#include <iostream>
using namespace std;

int main() {
    int celcius = 1;
    double fahrenheit;
    
    do {
        fahrenheit = (9.0 / 5.0) * celcius + 32;
        cout << "Celcoius: " << celcius << " -> Fahrenheit: " << fahrenheit << endl;
        celcius++;
    } while (celcius <= 10);
    return 0;
}