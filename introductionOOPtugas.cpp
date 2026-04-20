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

int main (){
    Barang elektronik;
    elektronik.nama = "Kulkas";
    elektronik.jumlah = 3;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "05-02-2022";

    elektronik.Spesifikasi();
 
}