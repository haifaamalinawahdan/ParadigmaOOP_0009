#include <iostream>
using namespace std;

class Barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void Spesifikasi(){
        cout << "NAMA : " << nama <<endl;
        cout << "JUMLAH : " << jumlah <<endl;
        cout << "KATEGORI : " << kategori << endl;
        cout << "TANGGAL PRODUKSI : " << tanggalProduksi <<endl;
    }
};