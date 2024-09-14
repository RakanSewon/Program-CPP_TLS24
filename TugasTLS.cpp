#include <iostream>
using namespace std;

int main (){
    int tinggi, berat, BBI, jenisKelamin;
    cout<<"Masukkan tinggi badan anda (cm): ";   
    cin>>tinggi;                                //input tinggi badan user
    cout<<"Masukkan berat badan anda (kg): ";   
    cin>>berat;                                 //input berat badan user
    cout<<"Masukkan jenis kelamin anda: " <<endl <<"1. Laki-laki" <<endl <<"2. Perempuan" <<endl;
    cin>>jenisKelamin;                          //input jenis kelamin user
    
    if (jenisKelamin==1){
        BBI=(tinggi-100)*0.9;       //kalkulasi berat badan ideal laki-laki
    }
    else if(jenisKelamin==2){
        BBI=(tinggi-100)*0.85;   //kalkulasi berat badan ideal perempuan
    }
    else{
    cout<<"Jenis kelamin tidak valid";
    return 0;                                   //menghentikan program jika input tidak valid
    }
    if (BBI <= berat){
        cout<<"Berat anda " <<berat - BBI << "kg di atas berat ideal";  //output
    }
    else {
        cout<<"Berat anda " <<BBI - berat << "kg di bawah berat ideal"; //output
    }
    return 0;
}