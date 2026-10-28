#include<iostream>
using namespace std;
int main(){
    const int m=12;
    short int piket[m];
    short int kalueshmeria=0;
    for(int i=0;i<m;i++){
        do{
            cout<<"Sa pike i ka arritur studentja/i (0-40) "<<i+1<<": ";
            cin>>piket[i];
            if(piket[i]<0 || piket[i]>40){
                cout<<"Piket jane dhene gabimishte. Duhet te jene nga 0 deri ne 40\n";
            }

        }while (piket[i]<0 || piket[i]>40);
    }
    int i=0;
    while (i<m)
    {
        if(piket[i]>=16){
            kalueshmeria++;
        }
        i++;
    }
    cout<<"Numri i studenteve/ave qe e kane kaluar kollokviumin eshte: "<<kalueshmeria<<endl;
    cout<<"Numri i studenteve/ave qe nuk e kane kaluar kollokviumin eshte: "<<m-kalueshmeria<<endl;
    return 0;
}