#include<iostream>
using namespace std;
int main(){
    int numri_artikujve;
    float shuma_artikujve=0;
    cout<<"Sa eshte numri i artikujve: ";
    cin>>numri_artikujve;
    for(int i=1;i<=numri_artikujve;i=i+1 /* ose i++ */){
        float cmimi;
        do{
            cout<<"Jepe cmimin per artikullin "<<i<<": ";
            cin>>cmimi;
            if(cmimi<=0){
                cout<<"Gabim! "
                    <<"Vlera e cmimit nuk mund te jete zero ose negative!"
                    <<" Provoni serish!\n";    
            }
        }while (cmimi<=0);
        shuma_artikujve=shuma_artikujve+cmimi;
        // cout<<"Shuma aktuale e artikujve: "<<shuma_artikujve<<endl;
    }
    cout<<"Shuma e te gjithe artikujve eshte: "<<shuma_artikujve<<endl;
    return 0;
}