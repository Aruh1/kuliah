#include <iostream>
using namespace std;

int main() {
    int nilai1, nilai2, nilai3;
    float rata;

    cout << "Masukkan nilai mahasiswa 1: ";
    cin >> nilai1;
    cout << "Masukkan nilai mahasiswa 2: ";
    cin >> nilai2;
    cout << "Masukkan nilai mahasiswa 3: ";
    cin >> nilai3;

    rata = (nilai1 + nilai2 + nilai3) / 3.0;

    cout << "Rata-rata nilai dari 3 mahasiswa adalah: " << rata << endl;
    return 0;
}
