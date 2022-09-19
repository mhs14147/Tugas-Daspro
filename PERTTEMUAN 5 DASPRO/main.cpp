#include <iostream>

using namespace std;

int main()
{
    float r, luas;

    cout << "input jari jari lingkaran: ";
    cin >> r;
    luas = 3.14 * r *r;
    cout << "Luas lingkaran= " << luas << endl;

    float p, l, Luas;
    cout << " input panjang persegi: ";
    cin >> p;
    cout << "input lebar persegi: ";
    cin >> l;

    Luas = p * l;

    cout << "luas persegi panjang = "<< Luas << endl;


    return 0;
}
