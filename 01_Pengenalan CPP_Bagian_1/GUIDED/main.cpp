#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int angka = 10;
    float desimal = 10.5;
    string kalimat = "reyner";
    double tinggi = 10.4;
    char jenis_kelamin = 'L';
    bool isTerang = true;

    cout << "Angka: " << angka << endl;


    int angka;
    cout << "Masukan Angka" << endl;
    cin >> angka;

    cout << "Angka : " << angka << endl;

    getch();

    int angka1 = 5;
    int angka2 = 5;

    bool hasil = (angka1 == angka2);

    cout << "Hasilnya adalah : " << boolalpha << hasil << endl;

    //operator logika

    bool kondisi1 = false;
    bool kondisi2 = false;

    bool hasil = (kondisi1 || kondisi2);

    cout << "Hasilnya adalah : " << boolalpha << hasil << endl;

    //percabangan

    string kata;
    cout << "Masukan kata = HALO" << endl;
    cin >> kata;

    if (kata == "HALO"){
        cout << "kata sesuai" << endl;
        } else{
        cout << "salah" << endl;
    }

    int tv;

    cout << "Daftar channel tv" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Indosiar" << endl;

    cout << "Masukan channel pilihan : ";
    cin >> tv;

    switch(tv) {
    case 1 :
        cout << "Channel yg anda pilih RCTI" << endl;
        break;
    case 2 :
        cout << "Channel yg anda piih Indosiar" << endl;
        break;
    default :
        cout << "Masukan channel sesuai list" << endl;

    }

    //perulangan
    int i;
    for(i=0; i<5; i++){
        cout << "HELLO WORLD" << endl;
    }

    for(int i=5; i>1; i--)
        cout << i-1 << "HELLO WORLD" << endl;

}
