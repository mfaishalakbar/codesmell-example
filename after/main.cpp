#include <iostream>
#include <string>
#include "./calc/calc.cpp"

using namespace std;

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