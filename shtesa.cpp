#include<iostream>
using namespace std;
int main(){
    short int nr_femijeve;
    const short int shtesa_baze=30, shtesa_bonus=10;
    short int shuma_shtesave;
    cout<<"Shkruaj numrin e femijeve: ";
    cin>>nr_femijeve;
    // cout<<"Sa eshte shtesa baze: ";
    // cin>>shtesa_baze;
    // cout<<"Shkruaj vleren e bonusit: ";
    // cin>>shtesa_bonus;
    if(nr_femijeve>=3){
        shuma_shtesave=2*shtesa_baze+(nr_femijeve-2)*(shtesa_baze+shtesa_bonus);
    }
    else{
        shuma_shtesave=nr_femijeve*shtesa_baze;
    }
    cout<<"Shuma totale shtesave eshte: "<<shuma_shtesave<<"\n";
    return 0;
}