#include <iostream>
using namespace std;

int main() {
    string hobi[10];
    int jml;
    cout << "Berapa banyak hobi And?: "; cin >> jml;
    cout << "\n Input Data Hobi \n";
    for(int i = 0; i < jml; i++) {
        cout << "Hobi ke-" << i + 1 << ": ";
        cin >> hobi[i];
    }
    cout << "\n Menampilkan Hobi \n";
    for(int i = 0; i < jml; i++) {
        cout << "Hobi ke-" << i + 1 << ": " << hobi[i] << endl;
    }
}