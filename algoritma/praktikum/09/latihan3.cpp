#include <iostream>
using namespace std;

int main() {
    string buah[3] = {"Pisang", "Apel", "Mangga"};
    for(int b=0; b < 3; b++) {
        cout << "Data buah ke-" << b << ": " << buah[b] << endl;
    }
    return 0;
}