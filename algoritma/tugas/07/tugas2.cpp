#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama;
    char statusMenikah;
    int jumlahAnak;
    double gajiPokok, tunjanganIstri = 0, tunjanganAnak = 0, totalGaji;

    cout << "Masukkan Gaji Pokok : Rp ";
    cin >> gajiPokok;
    cout << "Status Menikah (y/t): ";
    cin >> statusMenikah;
    cout << "Jumlah Anak         : ";
    cin >> jumlahAnak;

    if (statusMenikah == 'y' || statusMenikah == 'Y') {
        tunjanganIstri = 0.2 * gajiPokok;
    } else {
        tunjanganIstri = 0;
    }

    if (jumlahAnak == 1) {
        tunjanganAnak = 0.1 * gajiPokok;
    } else if (jumlahAnak == 2) {
        tunjanganAnak = 0.2 * gajiPokok;
    } else if (jumlahAnak >= 3) {
        tunjanganAnak = 0.3 * gajiPokok;
    } else {
        tunjanganAnak = 0;
    }

    totalGaji = gajiPokok + tunjanganIstri + tunjanganAnak;

    cout << fixed << setprecision(0);
    cout << "Gaji Pokok       : Rp " << gajiPokok << endl;
    cout << "Tunjangan Istri  : Rp " << tunjanganIstri << endl;
    cout << "Tunjangan Anak   : Rp " << tunjanganAnak << endl;
    cout << "Total Gaji       : Rp " << totalGaji << endl;

    return 0;
}
