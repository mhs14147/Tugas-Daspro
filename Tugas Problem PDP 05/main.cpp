//nama:fajaradjiwicaksana
//NIM:a11.2022.14147
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

int i, j, a=0, angka, mins, maks, b=0, sum, c, z, p=0, m,  n=0;
float ra, f;

//Soal No1
cout << "Soal No1" << endl;
for (i = 100, j =1; i >= 1 && j <= 100; i--, j++){
    cout << "i = " << i << " dan j = "<< j << endl;
}


//Soal No2
cout << "Soal No2" << endl;
for (j = 1; j <= 100; j++) {
    if(j % 2 == 1) {
        continue;
    }
    cout << "Nilai genap adalah " << j << endl;
}


//Soal No3
cout << "Soal No3" << endl;
for (i = 100; i >= 1; i--){
        cout << i << endl;
    if(i == 55){
        break;
    }
}


//Soal No4
cout << "Soal No4" << endl;
for(j = 1; j <= 20; j++){
        cout << j << endl;
    a += j;
    ra = (float)a/j;
}
        cout << "\n Jumlah = " << a << endl;
        cout << "Rata-rata" << ra << endl;


//Soal No5
cout << "Soal No5" << endl;
for(j = 1; ;j++){
        cout << "Masukan Nilai Anda = " << endl;
        cin >> angka;
    if(angka == -99){
        cout << "\n Keluar Karena Break " << endl;
    break;
    }
}


//Soal No6
cout << "Soal No6" << endl;
for(j = 1; ;j++) {
        cout << "Masukan Nilai Anda = " << endl;
        cin >> angka;
    if(angka == -99) {
        break;
    }
    if(j == 1) {
        mins = angka;
        maks = angka;
    } else { if(angka > maks) {
        maks = angka;
    } if(angka < mins) {
        mins = angka;
    }
    }
}


//Soal No7
cout << "Soal No7" << endl;
for (j = 1; ;j++) {
        cout << "Masukan Nilai Anda = " << endl;
        cin >> z;
    if(z == 9999) {
        break;
    }
        cout << z << endl;
        p = p + z;
}
        cout << "Jumlah Angka = " << p << endl;


//Soal No8
cout << "Soal No8" << endl;
for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> angka;
    if(angka == 9999) {
        break;
    }
    cout << angka << endl;
    a += j;
}
cout << "Jumlah angka = " << j << endl;


//Soal No9
cout << "Soal No9" << endl;
for(j = 0; ; j++) {
    cout << "Masukan Nilai Anda = ";
    cin >> m;
    cout << m << endl;
    if(m == 9999) {
        break;
    } else if(m != 9999) {
        n += m;
    }
    b += 1;
}
cout << "Jumlah angka = " << n << endl;
cout << "Jumlah cacah angka = " << b << endl;


//Soal No10
cout << "Soal No10" << endl;
for(i = 1; i <= 7; i++) {

    cout << "Looping yang ke - " << i << endl;
    for(j = 1; j <= 10; j++) {
        cout << "-angka " << j << "-" << endl;
    }
}


//Soal No11
cout << "Soal No11" << endl;
cout << "Masukan angka = ";
cin >> angka;
for(i = 1; i <= 10; i++) {
    sum = i*angka;
   cout << i << " x " << angka << " = " << sum << endl;
}


//Soal No12
cout << "Soal No12" << endl;
cout << "-------------------------" << endl;
cout << "Celcius     Fahremheit" << endl;
cout << "-------------------------" << endl;
for(c = 0; c <= 100; c++) {
  f = ((9.0/5)*c)+32;
  printf("%d \t|\t %.1f |\n",c, f);
}


//Soal No13
cout << "Soal No13" << endl;
cout << "------------------------------------------------------------------------------" << endl;
cout << "Celcius \t Fahremheit \t Keterangan" << endl;
cout << "------------------------------------------------------------------------------" << endl;
for(c = 100; c >= -45; c--) {
  f = ((9.0/5)*c)+32;
  if(c == 100) {
  printf("%d \t\t %.1f \t\t Air Mendidih \n",c, f);
  } else if(c == 40) {
  printf("%d \t\t %.1f \t\t Air Mandi Panas \n",c, f);
  } else if(c == 37) {
  printf("%d \t\t %.1f \t\t Temperatur Tubuh \n",c, f);
  } else if(c == 30) {
  printf("%d \t\t %.1f \t\t Cuaca Pantai\n",c, f);
  } else if(c == 21) {
  printf("%d \t\t %.1f \t\t Temperatur Ruangan \n",c, f);
} else if(c == 10) {
  printf("%d \t\t %.1f \t\t Hari Yang Dingin \n",c, f);
} else if(c == 0) {
  printf("%d \t\t %.1f \t\t Titik Beku Air \n",c, f);
} else if(c == -18) {
  printf("%d \t\t %.1f \t\t Cuaca Dingin Bersalju \n",c, f);
} else if(c == -40) {
  printf("%d \t\t %.1f \t\t Cuaca Sangat Dingin Bersalju \n",c, f);
  cout << "------------------------------------------------------------------------------" << endl;
}
}

    return 0;
}
