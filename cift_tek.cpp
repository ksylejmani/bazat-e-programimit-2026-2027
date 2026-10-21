#include<iostream>
using namespace std;
int main(){
    int n,nc,nt;
    cout<<"Sheno nje numer: ";
    cin>>n;
    nc=0;
    nt=0;
    for(int i=1;i<=n;i=i+1/* ose i++ */){
        int a;
        cout<<"Jepe numrin "<<i<<":";
        cin>>a;
        if(a%2==0){
            nc++;
        }
        else{
            nt++;
        }
    }
    cout<<"Numri i vlerave cift eshte: "<<nc<<endl;
    cout<<"Numri i vlerave tek eshte: "<<nt<<endl;
    return 0;
}