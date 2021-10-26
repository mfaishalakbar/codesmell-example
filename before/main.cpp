#include <iostream>
#include <string>

using namespace std;


int hitung_penumpang_umum(int penumpang) {
    int harga = 5000 * penumpang;
    return harga;
}

int hitung_penumpang_anak(int penumpang) {
    int harga = 2000 * penumpang;
    if(harga >= 10000) {
        harga = harga - 2000;
    }

    return harga;
}

int hitung_penumpang_mahasiswa(int penumpang) {
    int harga = 3500 * penumpang;
    if(harga >= 30000) {
        harga = harga - 10000;
    }

    return harga;
}

int hitung_penumpang_lansia(int penumpang) {
    int harga = 1500 * penumpang;
    return harga;
}

int hitung_harga_tiket(string tipe, int penumpang) {
    if(tipe == "UMUM") {
        return hitung_penumpang_umum(penumpang);
    }

    return 0;
}

int main() {
    // Print harga tiket sebagai penumpang tipe 

    int hargaTiket = hitung_harga_tiket("UMUM", 1);

    std::cout << "Harga Tiket Umum: " << hargaTiket << std::endl;
}