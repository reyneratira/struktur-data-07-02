#include <iostream>
#include <string>

using namespace std;

string angkaKesatuan(int angka) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh",
                       "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 20) {
        return satuan[angka];
    } else if (angka < 100) {
        return puluhan[angka / 10] + (angka % 10 != 0 ? " " : "") + satuan[angka % 10];
    } else {
        return "Angka tidak dalam rentang 0-100";
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << angka << " dalam tulisan adalah: " << angkaKesatuan(angka) << endl;
    } else {
        cout << "Angka yang Anda masukkan tidak dalam rentang 0-100" << endl;
    }

    return 0;
}
