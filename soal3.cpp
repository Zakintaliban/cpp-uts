#include <iostream>
using namespace std;

int main()
{
    int angka, i;
    bool prima = true;
    cout << "masukan angka:\n";
    cin >> angka;
    if (angka % 2 == 0){
        cout << "angka genap";
    } else {
        cout << "angka ganjil";
    }
    if (angka > 0){
        cout << "\nangka positif";
    } else {
        cout << "\nangka negatif";
    }
    // 0 and 1 bukan angka prima
    if (angka == 0 || angka == 1 || angka < 0) {
        prima = false;
    }
    else {
        for (i = 2; i <= angka / 2; ++i) {
            if (angka % i == 0) {
                prima = false;
                break;
            }
        }
    }
    if (prima)
        cout << "\n" << angka << " adalah angka prima";
    else
        cout << "\n" <<  angka << " bukan angka prima";


    return 0;
}