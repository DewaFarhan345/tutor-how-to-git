#include <iostream>
using namespace std;

int main (){
    int hargabukukomik = 30000;
    int hargabukubelajar = 50000;
    int hargabukucatatan = 20000;
    int komik;
    int belajar;
    int catatan;
    string nama;
    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukkan Nama Pembeli        : ";
    cin >> nama;
    cout << "Masukkan Jumlah Buku Komik   : ";
    cin >> komik;
    cout << "Masukkan Jumlah Buku Belajar : ";
    cin >> belajar;
    cout << "Masukkan Jumlah Buku Catatan : ";
    cin >> catatan;
    cout << "=================================" << endl;
    cout << "\n";
    cout << "====== Total Harga Belanja ======" << endl;
    cout << "Total Harga Buku Komik   : " << hargabukukomik*komik << endl;
    cout << "Total Harga Buku Belajar : " << hargabukubelajar*belajar << endl;
    cout << "Total Harga Buku Catatan : " << hargabukucatatan*catatan << endl;
    cout << "=================================" << endl;
    int totalharga = (hargabukukomik*komik)+(hargabukubelajar*belajar)+(hargabukucatatan*catatan);
    cout <<"\n";
    cout << "========= Struk Belanja =========" << endl;
    cout << "Nama Pembeli        : " << nama << endl;
    cout << "Jumlah Buku Komik   : " << komik << endl;
    cout << "Jumlah Buku Belajar : " << belajar << endl;
    cout << "Jumlah Buku Catatan : " << catatan << endl;
    cout << "Total Harga Buku    : " ;
    if (totalharga <= 100000) {
        cout << totalharga << endl;
        cout << "======= Tidak Ada Diskon =======" << endl;
    } else if (totalharga < 300000) {
        cout << totalharga*90/100 << endl;
        cout << "======= Total Diskon 10% =======" << endl;
    } else if (totalharga >= 300000) {
        cout << totalharga*80/100 << endl;
        cout << "======= Total Diskon 20% =======" << endl;
    }
    cout << "= Terima Kasih Sudah Berbelanja =" << endl;
    

    return 0;
}