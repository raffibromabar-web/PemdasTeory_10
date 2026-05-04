#include <iostream>
#include <string>
using namespace std;

class Produk {
private:
    int id_Produk; //menambahkan variabel id produk, nama produk
    string nama_Produk;

public:
    Produk(){ //membuat construction tanpa parameter
        id_Produk = 0;
        nama_Produk = "tidak ada";
    }

    Produk(int id){
        id_Produk = id;
        nama_Produk = "tidak ada";
    }

    Produk(string nama){
        nama_Produk = nama;
        id_Produk = 0;
    }

    Produk(int id, string nama){
        id_Produk = id;
        nama_Produk = nama;
    }

    void tampilkan() {
        cout << "Id Produk : " << id_Produk << endl;
        cout << "Nama Produk : " << nama_Produk << endl;
    }
};

int main() {

    cout << "=== Daftar Inventaris Toko ===" << endl;

    Produk p1;
    p1.tampilkan();

    Produk p2(11);
    p2.tampilkan();

    Produk p3("Laptop");
    p3.tampilkan();

    Produk p4(21, "Keyboard");
    p4.tampilkan();
}