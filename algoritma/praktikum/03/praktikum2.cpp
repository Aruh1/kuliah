#include <iostream>
using namespace std;

int main() {
    float celcius, fahrenheit, reamur, kelvin;

    cout << "Masukan Suhu (Celcius) = ";
    cin >> celcius;

    fahrenheit = (9.0 / 5.0) * celcius + 32;
    reamur = (4.0 / 5.0) * celcius;
    kelvin = celcius + 273.15;

    cout << "\nJadi,";
    cout << "  " << celcius << " derajat celcius \t = " << fahrenheit << " derajat fahrenheit" << endl;
    cout << "       " << fahrenheit << " derajat fahrenheit  = " << reamur << " derajat reamur" << endl;
    cout << "       " << reamur << " derajat reamur \t = " << kelvin << " derajat kelvin" << endl;

    return 0;
}