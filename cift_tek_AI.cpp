
#include<iostream>
using namespace std;

int main(){
    int n,nc,nt;
    int sc=0,st=0;

    cout<<"Sh\x89no nj\x89 num\x89r: ";
    cin>>n;

    nc=0;
    nt=0;

    for(int i=1;i<=n;i++){
        int a;
        cout<<"Jepe numrin "<<i<<": ";
        cin>>a;
        cout<<"Test unaza\n";
        if(a%2==0){
            nc++;
            sc=sc+a;
            cout<<"Test \x87ift\n";
        }
        else{
            nt++;
            st=st+a;
            cout<<"Test tek\n";
        }
    }

    cout<<"Numri i vlerave cift eshte: "<<nc<<endl;
    cout<<"Numri i vlerave tek eshte: "<<nt<<endl;
    cout<<"Shuma e vlerave cift eshte: "<<sc<<endl;
    cout<<"Shuma e vlerave tek eshte: "<<st<<endl;

    return 0;
}
