#include <iostream>

using namespace std;

int main(){
    int indexData = 2;
    int counter = 0;
    int sum = 0;
    int avg = 0;
    int x[3][2][2];

    cout<<"{ \n";
     for(int i=0 ; i<3 ; i++){
        cout<<"  { \n";
        for(int j=0 ; j<2 ; j++){
        cout<<"    { ";
            for(int k=0 ; k<2 ; k++){
                x[i][j][k] = indexData;
                indexData += 2;

                if(k<2-1){
                    cout<<x[i][j][k]<<",";
                }else{
                    cout<<x[i][j][k];
                }

                if(x[i][j][k]%4==0){
                    counter ++;
                    sum += x[i][j][k];
                }
            }
        cout<<" }\n";
        }
    cout<<"  }\n\n";
     }
    cout<<"}";

// Mencari kel 4
avg = sum/counter;
cout<<"\n\nKelipatan 4 : "<<counter<<" angka";
cout<<"\nJumlah Kelipatan 4 : "<<sum;
cout<<"\nRata-Rata Kelipatan 4 : "<<avg;
    return 0;
}
