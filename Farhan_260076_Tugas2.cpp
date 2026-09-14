#include <iostream>
using namespace std;

int main(){
    int hargamineral = 4000;
    int hargatehbotol = 5000;
    int hargakopisusu = 7000;
    int hargacimori = 8000;
    int kode;
    int uang;
    cout << "======== Mesin Minuman ========" << endl;
    cout << "Pilih Minuman Yang Ingin Dibeli" << endl;
    cout << "1. Air Mineral : Rp." << hargamineral << endl;
    cout << "2. Teh Botol   : Rp." << hargatehbotol << endl;
    cout << "3. Kopi Susu   : Rp." << hargakopisusu << endl;
    cout << "4. Susu Cimori : Rp." << hargacimori << endl;
    cout << "Masukkan Kode Minuman : ";
    cin >> kode;
    cout << "Nominal Uang Anda     : ";
    cin >> uang;
    cout << "===============================" << endl;
    cout << "\n";

    switch (kode) {
    case 1:
        cout << "======= Detail Transaksi =======" << endl;
        if (uang >= hargamineral) {
            cout << "Air Mineral Dibeli" << endl;
            cout << "Kembalian : " << uang-hargamineral<< endl;
        }
        else if (uang < hargamineral){
            cout << "Minuman Tidak Terbeli" << endl;
            cout << "Uang Tidak Mencukupi" << endl;
        }
        cout << "================================" << endl;
    break;
    case 2:
        cout << "======= Detail Transaksi =======" << endl;
        if (uang >= hargatehbotol) {
            cout << "Teh Botol Dibeli" << endl;
            cout << "Kembalian : " << uang-hargatehbotol << endl;
        }
        else if (uang < hargatehbotol){
            cout << "Minuman Tidak Terbeli" << endl;
            cout << "Uang Tidak Mencukupi" << endl;
        }
        cout << "================================" << endl;
    break;
    case 3:
        cout << "======= Detail Transaksi =======" << endl;
        if (uang >= hargakopisusu) {
            cout << "Kopi Susu Dibeli" << endl;
            cout << "Kembalian : " << uang-hargakopisusu << endl;
        }
        else if (uang < hargakopisusu){
            cout << "Minuman Tidak Terbeli" << endl;
            cout << "Uang Tidak Mencukupi" << endl;
        }
        cout << "================================" << endl;
    break;
    case 4:
        cout << "======= Detail Transaksi =======" << endl;
        if (uang >= hargacimori) {
            cout << "Air Mineral Dibeli" << endl;
            cout << "Kembalian : " << uang-hargacimori << endl;
        }
        else if (uang < hargacimori){
            cout << "Minuman Tidak Terbeli" << endl;
            cout << "Uang Tidak Mencukupi" << endl;
        }
        cout << "================================" << endl;
    break;
    }
    return 0;
}