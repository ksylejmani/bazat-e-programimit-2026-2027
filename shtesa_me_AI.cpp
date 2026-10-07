#include<iostream>
using namespace std;
int main(){
    short int nr_femijeve;
    const short int shtesa_baze=30, shtesa_bonus=10;
    short int shuma_shtesave;
    cout<<"Shkruaj numrin e femijeve: ";
    cin>>nr_femijeve;
    if(nr_femijeve>=3){
        shuma_shtesave=2*shtesa_baze+(nr_femijeve-2)*(shtesa_baze+shtesa_bonus);
        cout<<"Femije me bonus: "<<nr_femijeve-2<<"\n";
    }
    else{
        shuma_shtesave=nr_femijeve*shtesa_baze;
        cout<<"Asnje femije nuk kualifikohet per bonus.\n";
    }
    cout<<"Shuma totale shtesave eshte: "<<shuma_shtesave<<"\n";
    if(nr_femijeve>0)
        cout<<"Mesatarja per femije: "<<shuma_shtesave/nr_femijeve<<"\n";
    return 0;
}