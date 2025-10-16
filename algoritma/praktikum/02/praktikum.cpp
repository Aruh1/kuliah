#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim, kelas;
    int semester;
    float ipk;

    cout << "PRAKTIKUM ALGORITMA 2025" << endl;
    cout << endl;

    cout << "Masukan Nama: ";
    getline(cin, nama);

    cout << "Masukan NIM: ";
    cin >> nim;

    cout << "Masukan Kelas: ";
    cin >> kelas;

    cout << "Masukan Semester: ";
    cin >> semester;

    cout << "Masukan IPK: ";
    cin >> ipk;

    cout << endl;

    cout << "BIODATA MAHASISWA" << endl;
    cout << "===================" << endl;
    cout << "Nama     : " << nama << endl;
    cout << "NIM      : " << nim << endl;
    cout << "Kelas    : " << kelas << endl;
    cout << "Semester : " << semester << endl;
    cout << "IPK      : " << ipk << endl;
    cout << "-------------------" << endl;

    return 0;
}