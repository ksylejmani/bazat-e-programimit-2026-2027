#include<iostream>
using namespace std;
enum ai{
    chatGPT=1,claude,Grok,Copilot,Gemini
};
float diferenca_njepasnjeshme(int vargu[], int m, ai x){
    float rez=0;
    for(int i=1;i<m;i++){
        int d=vargu[i]-vargu[i-1];
        rez=rez+d;
        cout<<"TEST_A\n";
    }
    if(x==chatGPT||x==claude){
        rez=rez*0.8;
        cout<<"TEST_B\n";
    }
    return rez;
}
int diferenca_cifteve(int vargu[], int m){
    int s=0;
    for(int i=0;i<m;i+=2){
        int d=vargu[i]-vargu[i+1];
        s=s+d;
        cout<<"TEST_C\n";
    }
    return s;
}
int main(){
    const int m=6;
    ai x=claude;
    int vargu[m]={-2,6,1,3,39,12};
    cout<<"Shume e diferencave te elementeve te njepasnjeshme eshte: "
        <<diferenca_njepasnjeshme(vargu,m,x)<<endl;
    cout<<"Diferenca e cifteve eshte: "<<diferenca_cifteve(vargu,m)
        <<endl;
    return 0;
}