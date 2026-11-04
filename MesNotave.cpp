#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int a=5, b=6;
    int notat[a][b];
    float mes;
    int s;
    int i,j;
    i=0;
    do{
        j=0;
        do{
            cout<<"Per studentin "<<i+1<<" jepen noten "<<j+1<<": ";
            cin>>notat[i][j];
            j++; 

        }while(j<b);
        i++;
    }while(i<a);
    j=0;
    do{
        s=0;
        i=0;
        do{
            s=s+notat[i][j];
            i++;
        }while(i<a);
        mes=(float)s/a;
        cout<<"Mesatarja per lenden " <<j+1<<" eshte: "<<mes<<endl;
        j++;
    }while(j<b);
    return 0;
}