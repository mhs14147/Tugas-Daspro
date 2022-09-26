//NAMA: FAJAR ADJI WICAKSANA//
//NIM: A11.2022.14147//
//KELP: A11.4104//
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int jrsn;

    cout << " Daftar Jurusan\n";
    cout << " 1. Teknik Informatika\n 2. Sistem Informasi\n 3. Desain Komunikasi Visual " <<endl;
    cout << " Masukan Jurusan Anda: ";
    cin >> jrsn;
    cout << "\n";

    if (jrsn == 1) {
        cout << "Saya jurusan Teknik Informatika " <<endl;
    } else if(jrsn == 2){
        cout << "Saya jurusan Sistem Informasi" <<endl;
    } else if(jrsn == 3){
        cout << "Saya jurusan Desain Komunikasi Visual"<<endl;
    }
    cout<<"\n";

    int smt;

    cout << "Semester\n";
    cout << "1. Semester 1-2 = Freshman\n2. Semester 3-4 = Sophomore\n3. Semester 5-6 = Junior\n4. Semester 7-8 = Senior"<<endl;
    cout << " Masukan Semester Anda: ";
    cin >> smt;
    cout << "\n";

    if (smt == 1) {
        cout << " Saya dalam kategori Freshman " <<endl;
    } else if(smt == 2){
        cout << "Saya dalam kategori Sophomore" <<endl;
    } else if(smt == 3){
        cout << "Saya dalam kategori Junior"<<endl;
    } else if (smt == 4){
        cout << "Saya dalam kategori Senior"<<endl;
    }

    return 0;
}
