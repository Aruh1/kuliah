#include <iostream>
using namespace std;

int main() {
    int level = 1;
    int jawaban;
    int hasilBenar;
    bool lanjutMain = true;

    cout << "2518049 - Rizki Pratama" << endl;
    cout << "===== PROGRAM GAME MATEMATIKA =====" << endl << endl;

    do {
        hasilBenar = level + (level * 5);

        cout << "Level " << level << endl;
        cout << "Berapa hasil dari " << level << " + " << (level * 5) << " ? ";
        cin >> jawaban;

        if (jawaban == hasilBenar) {
            cout << "Benar! Naik level!" << endl << endl;
            level++;
        } else {
            cout << "Game Over" << endl;
            lanjutMain = false;
        }

    } while (lanjutMain && level <= 5);

    if (lanjutMain) {
        cout << "Selamat! Kamu menyelesaikan semua level!" << endl;
    }

    return 0;
}