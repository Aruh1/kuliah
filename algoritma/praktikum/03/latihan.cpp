#include <iostream>
using namespace std;

int main(){
    float a, incre, decre;

    cout << "Masukkan nilai awal: ";
    cin >> a;

    incre = ++a;
    decre = --a;

    cout << "Nilai setelah increment: " << incre << endl;
    cout << "Nilai setelah decrement: " << decre << endl;

    return 0;
}