//Nama: fajar adji wicaksana
//NIM: A11.2022.14147
//Kelp: A11.4104
#include <iostream>

using namespace std;

int main()
{
    int UangDito = 5000;
    int HargaPermen;

    cout<<"Uang Dito: "<<UangDito<<endl;
    cout<<"Harga Satuan Permen: ";
    cin>> HargaPermen;


        if(HargaPermen == 500 || HargaPermen == 1000){
            cout<<"Dito mendapatkan permen : "<<UangDito / 1000<<" Buah." <<endl;
        }else if(HargaPermen == 300){
            cout<<"Kelipatan harga Permen : ";
                for(int i = HargaPermen ; i <= UangDito ; i+=300){
                    cout<<i<<" ";
            }
             cout<<endl;
             cout<<"Dito mendapatkan permen : "<< UangDito / HargaPermen<<" Buah."<<endl;
        }else{
            cout<<"Angka Input Salah"<<endl;
        }
    return 0;
}
