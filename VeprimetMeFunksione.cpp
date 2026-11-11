#include<iostream>
#include<iomanip>
using namespace std;
void Lexo(int vargu[], int m);
void Shtyp(int vargu[], int m);
void Rrotullo(int vargu[], int m);
int NumroShumeshifroret(int vargu[], int m);
int NumroNjeshifroret(int vargu[], int m);
int main(){
    const int m=6;
    int vargu[m];
    Lexo(vargu,m);
    Shtyp(vargu,m);
    Rrotullo(vargu,m);
    Shtyp(vargu,m);
    int rez=NumroShumeshifroret(vargu,m);
    int rez2=NumroNjeshifroret(vargu,m);
    cout<<"Numri i vlerave shumeshifrore eshte: "<<rez<<endl;
    cout<<"Numri i vlerave njeshifrore eshte: "<<rez2<<endl;
    return 0;
}
void Lexo(int vargu[], int m){
    int i=0;
    while (i<m)
    {
        cout<<"Jepe vleren per anetarin "<<i+1<<": ";
        cin>>vargu[i];
        i++;
    }
    return;
}
void Shtyp(int vargu[], int m){
    int i=0;
    while (i<m)
    {
        cout<<setw(5)<<vargu[i];
        i++;
    }
    cout<<endl;
}
void Rrotullo(int vargu[], int m){
    for(int i=0;i<m/2;i++){
        int x=vargu[i];
        vargu[i]=vargu[m-i-1];
        vargu[m-i-1]=x;
    }
}
int NumroShumeshifroret(int vargu[], int m){
    int i=0, n=0;
    while (i<m)
    {
        if(abs(vargu[i])>9){
            n++;
        }
        i++;
    }
    return n;
}
int NumroNjeshifroret(int vargu[], int m){
    int i=0, n=0;
    while (i<m)
    {
        if(abs(vargu[i])<=9){
            n++;
        }
        i++;
    }
    return n;
}