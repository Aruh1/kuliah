#include <iostream>
using namespace std;

int main() {
    int tabelangka[2][3] = {
        {80, 90, 75},
        {85, 88, 92}
    };
    cout << "Tabel Angka (2x3) " << endl;
    cout << "Angka 1 (baris 2): " << tabelangka[1][1] << endl;
    cout << "Angka 2 (kolom 3): " << tabelangka[1][2] << endl;
    for(int i = 0; i < 2; i++) {
        cout << "Index ke-" << i + 1 << ": ";
        for(int j = 0; j < 3; j++) {
            cout << tabelangka[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}