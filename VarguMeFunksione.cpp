#include<iostream>
using namespace std;
void Lexo(int vargu[], int m);
int NumroCift(int vargu[], int m);
long long int ProdhimiPozitiv(int vargu[], int m);
int main(){
    const int m=5;
    int numri_cift,prodhimi_pozitiv;
    int vargu[m];
    Lexo(vargu,m);
    numri_cift=NumroCift(vargu,m);
    prodhimi_pozitiv=ProdhimiPozitiv(vargu,m);
    cout<<"Numri i vlerave \x87ift \x89sht\x89: "<<numri_cift<<endl;
    cout<<"Porhdimi i numrave pozitiv \x89sht\x89: "<<prodhimi_pozitiv<<endl;
    return 0;
}
void Lexo(int vargu[], int m){
    int i;
    for(i=0;i<m;i++){
        cout<<"Cakto vleren per anetarin "<<i+1<<": ";
        cin>>vargu[i];
        cout<<"TestLexo\n";
    }
    return; // Kjo eshte opsionale
}
int NumroCift(int vargu[], int m){
    int i; int c=0;
    for(i=0;i<m;i++){
        if(vargu[i]!=0 && vargu[i]%2==0){
            c++;
            cout<<"TestoNumro\n";
        }
    }
    return c;
}

long long int ProdhimiPozitiv(int vargu[], int m){
    int i=0, p=1;
    while (i<m)
    {
        if(vargu[i]>0){
            p=p*vargu[i];
            cout<<"TestoProdhimi\n";
        }
        i++;
    }
    return p;
}