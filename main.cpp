/*

        Nama Kelompok : 
1. Gede Krisna Kamantaka ( 10 )
2. I Dewa Gede Darmawan Putra ( 12 )
3. I Gede Satria Dharma Putra ( 15 )
4. Ngurah Danuh Putra ( 31 )
5. Putu Agus Ega Mahendra Putra (34 )
6. Rakryan Teja Abimata ( 35 )

*/ 




#include <iostream>
using namespace std;
int main(){
    int a,b,hasil;
    char aritmatika;
    cout << " Masukin nilai pertama: ";
    cin >> a;
    cout << "===========================================================" << endl;
    cout << "=\t\t 1. Tambah ( + )                          =" << endl;
    cout << "=\t\t 2. Kurang ( - )                          =" << endl;
    cout << "=\t\t 3. Kali ( * )                            =" << endl;
    cout << "=\t\t 4. Bagi ( / )                            =" << endl;
    cout << "=\t\t 5. Modulus ( % )                         =" << endl;
    cout << "============================================================" << endl;
    cout << "pilih simbol menu :";
    cin >> aritmatika;
    cout << " Masukin nilai kedua : ";
    cin >> b;
    cout << "\nHasil dari Perhitungan : ";
    cout << a << " " << aritmatika << " " << b ;
    switch (aritmatika){
        case '+': hasil = a + b; break;
        case '-': hasil = a - b; break;
        case '*': hasil = a * b ; break;
        case '/': hasil = a / b; break;
        case '%': hasil = a % b; break;
        default: cout << " operator yang kamu masukan salah " << endl;
    };
    cout << " = " << hasil << endl;
    cin.get();
    return 0;

}