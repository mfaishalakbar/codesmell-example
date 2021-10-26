int hitung_penumpang_umum(int penumpang) {
    return 5000 * penumpang;
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
    return 1500 * penumpang;
}
