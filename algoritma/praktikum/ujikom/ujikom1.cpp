#include <iostream>
using namespace std;

void pemisah() {
    for(int i = 0; i < 30; i++) {
        cout << "=";
    }
    cout << endl;
}

void dataProduk() {
    cout << "===== Inventaris Toko Makmur Grosir =====" << endl;
    cout << "No | Nama Produk | Harga | Stok |" << endl;
    pemisah();
    cout << endl;
}

void menuUtama() {
        cout << "===== Menu Utama =====" << endl;
        cout << "1. Tambah Data Produk" << endl;
        cout << "2. Tampilkan Data Produk" << endl;
        cout << "3. Hapus Data Produk" << endl;
        cout << "4. Edit Data Produk" << endl;
        cout << "5. Cari Data Produk" << endl;
        cout << "6. Keluar" << endl;
        cout << "Pilih menu (1-6): ";
}

int main() {
    int datamax = 100;
    int jumlahData = 0;
    string cariNama;
    int pilihanMenu, pilihan, harga[100][2], data[100][2];
    string produk[100], nama[100];
    bool ditemukan;
    
    do {
        menuUtama();
        cin >> pilihanMenu;
        pemisah();
        switch (pilihanMenu) {
            case 1:
                if (jumlahData >= datamax) {
                    cout << "Data sudah penuh." << endl;
                    break;
                } else {
                    jumlahData++;
                    cout << "Masukkan nama produk: "; cin >> nama[1];
                    cout << "Masukkan harga produk: "; cin >> data[0][1];
                    cout << "Masukkan stok produk: "; cin >> data[1][1];
                }
                break;
            case 2:
                dataProduk();
                if (jumlahData == 0) {
                    cout << "Data kosong." << endl;
                } else {
                    for (int i = 0; i < jumlahData; i++) {
                        cout << i+1 << " | " << nama[i+1] << " | " << data[0][i+1] << " | " << data[1][i+1] << " |" << endl;
                    }
                }
                break;
            case 3:
                cout << "Masukkan data yang ingin dihapus?"; cin >> pilihan;
                if (pilihan < 1 || pilihan > jumlahData) {
                    cout << "Data tidak ditemukan." << endl;
                } else {
                    for (int i = pilihan - 1; i < jumlahData - 1; i++) {
                        nama[i] = nama[i + 1];
                        data[0][i] = data[0][i + 1];
                        data[1][i] = data[1][i + 1];
                    }
                    jumlahData--;
                    cout << "Data berhasil dihapus." << endl;
                }
                break;
            case 4:
                cout << "Masukkan data yang ingin diedit?"; cin >> pilihan;
                if (pilihan < 1 || pilihan > jumlahData) {
                    cout << "Data tidak ditemukan." << endl;
                } else {
                    cout << "Data saat ini!" << endl;
                    cout << "Nama Produk: " << nama[pilihan - 1+1] << endl;
                    cout << "Harga Produk: " << data[0][pilihan - 1+1] << endl;
                    cout << "Stok Produk: " << data[1][pilihan - 1+1] << endl;
                    cout << endl;
                    cout << "Masukkan data baru!" << endl;
                    cout << "Masukkan nama produk: "; cin >> nama[pilihan - 1+1];
                    cout << "Masukkan harga produk: "; cin >> data[0][pilihan - 1+1];
                    cout << "Masukkan stok produk: "; cin >> data[1][pilihan - 1+1];
                    cout << "Data berhasil diubah." << endl;
                }
                break;
            case 5:
                cout << "Masukkan nama produk yang dicari?"; cin >> cariNama;
                if(ditemukan = false) {
                    cout << "Data tidak ditemukan." << endl;
                } else {
                    for (int i = 0; i < jumlahData; i++) {
                        if (nama[i+1] == cariNama) {
                            cout << "Data ditemukan!" << endl;
                            cout << "Nama Produk: " << nama[i+1] << endl;
                            cout << "Harga Produk: " << data[0][i+1] << endl;
                            cout << "Stok Produk: " << data[1][i+1] << endl;
                            ditemukan = true;
                            break;
                        }
                    }
                    if (!ditemukan) {
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
                break;
            // case 6:
            //     cout << "Keluar dari program." << endl;
            //     return 0;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihanMenu < 6);
    return 0;
}
