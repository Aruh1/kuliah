#include <iostream>
using namespace std;

int main() { 
    int nilai;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    if ( nilai  >= 60 ) {
        cout << "Anda lulus!" << endl;
    } else {
        cout << "Anda tidak lulus." << endl;
    }
    
    return 0;
}