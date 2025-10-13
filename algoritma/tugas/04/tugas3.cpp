#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double total_pembelian;
    char status_member;
    double diskon = 0.0;
    double total_bayar;

    cout << "Masukkan total pembelian (Rp): ";
    cin >> total_pembelian;

    cout << "Apakah Anda seorang member? (Y/T): ";
    cin >> status_member;

    if (status_member == 'Y' || status_member == 'y') {
        diskon = 0.15 * total_pembelian;
        cout << "\nSelamat! Anda mendapatkan diskon member sebesar 15%." << endl;
    }

    total_bayar = total_pembelian - diskon;

    cout << "Total Pembelian : Rp " << fixed << setprecision(2) << total_pembelian << endl;
    cout << "Diskon            : Rp " << fixed << setprecision(2) << diskon << endl;
    cout << "Total Bayar       : Rp " << fixed << setprecision(2) << total_bayar << endl;

    return 0;
}

