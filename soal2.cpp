#include <iostream>
using namespace std;

int main()
{
    char ngulang;
    int angka;

    do{
    cout << "silahkan pilih (1-3) jumlah uang yang akan anda ambil:";
    cout << "\n1. 100.000";
    cout << "\n2. 250.000";
    cout << "\n3. 500.000\n";
    cin >> angka;
    switch (angka) {
    case 1:
        cout << "Silahkan ambil uang 100.000 anda";
        break;
    case 2:
        cout << "Silahkan ambil uang 250.000 anda";
        break;
    case 3:
        cout << "Silahkan ambil uang 500.000 anda";
        break;
    default:
    cout << "masukan angka 1-3";
    }
    cout<<"\napakah ingin mengulang lagi? (y/n)\n";
    cin >> ngulang;
    }
    while (ngulang == 'y');
        if (ngulang == 'n') {
            cout << "Terima kasih telah menggunakan ATM ini.";
    }
    return 0;
}