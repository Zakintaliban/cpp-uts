#include <iostream>
using namespace std;

int main()
{
    int i, j, N;
    char ngulang;

    do{
    cout<<"Enter N: ";
    cin>>N;
    
    if (N % 2 == 1)
    {
       for(i=1; i<=N; i++) // loop luar
    {
        for(j=1; j<=N; j++) // loop dalam
        {
            if(i==(N/2)+1 || j==(N/2)+1){
            cout << "*"; // symbol x
            }
            else{
            cout << " "; // symbol space
            }    
        }
        cout << "\n";   
    }
    } else {
        cout << "masukan angka ganjil";
    }
    cout<<"\napakah ingin mengulang lagi?";
    cin >> ngulang;
    }
    while (ngulang == 'y');
    
    return 0;
}