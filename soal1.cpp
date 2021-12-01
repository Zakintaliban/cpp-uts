#include <iostream>
using namespace std;

int main()
{
    int i, j, angka;
    char ngulang;

    do{
    cout<<"Jumlah Baris? ";
    cin>>angka;
    if (angka % 2 == 1)
    {   
        cout << "bintang(" << angka << "):\n";
        for(i=1; i<=angka; i++) // loop luar
    {
        for(j=1; j<=angka; j++) // loop dalam
        {
            if(i==(angka/2)+1 || j==(angka/2)+1){
            cout << "*"; // symbol x
            }
            else{
            cout << " "; // symbol space
            }    
        }
        cout << "\n";   
    }
    } else {
        cout << "Anda memasukkan jumlah Genap. Masukkan hanya jumlah Ganjil";
    }
    cout<<"\nApakah anda ingin mengulang Program (Y/N):";
    cin >> ngulang;
    }
    while (ngulang == 'y');
        if (ngulang == 'n') {
            cout << "terimakasih telah menggunakan program ini";
    }
    return 0;
}