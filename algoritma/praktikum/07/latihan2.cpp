#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i <= 4) {
        int j = 1;
        while(j <= 3) {
            cout << "B" << i << "K" << j << "\t";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}