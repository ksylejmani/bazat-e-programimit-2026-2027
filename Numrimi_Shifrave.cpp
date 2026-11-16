#include<iostream>
using namespace std;
int NumroShifrat(int numri){
    int i=numri,rez=0;
    while (i>=1)
    {
        i=i/10;
        cout<<"TEST\n";
        rez++;
    }
    return rez;
}
int NumroZerot(int numri){
    int i=numri,rez=0;
    while (i>=1)
    {
        int shifra=i%10;
        if(shifra==0){
            rez++;
            cout<<"TEST2\n";
        }
        cout<<"TEST\n";
        i=i/10;
    }
    return rez;
}
int Prodhimi(int numri, int a, int b){
    int i=numri,rez=1;
    while (i>=1)
    {
        int shifra=i%10;
        if(shifra>=a && shifra<=b){
            rez=rez*shifra;
        }
        i=i/10;
    }
    return rez;
}
int ShumaShifrave(int numri){
    int i=numri,rez=0;
    while (i>=1)
    {
        int shifra=i%10;
        rez=rez+shifra;
        i=i/10;
    }
    return rez;
}
int main(){
    int n,r,nz,p,a,b, s;
    cout<<"Jepe nje numer: ";
    cin>>n;
    cout<<"Jepe kufirin e poshtem: ";
    cin>>a;
    cout<<"Jepe kufirin e eperme: ";
    cin>>b;
    r=NumroShifrat(abs(n));
    nz=NumroZerot(abs(n));
    p=Prodhimi(abs(n),abs(a),abs(b));
    s=ShumaShifrave(abs(n));
    cout<<"Numri i shifrave eshte: "<<r<<endl;
    cout<<"Numri i zerove eshte: "<<nz<<endl;
    cout<<"Prodhimi i shifrave ne mes te "<<a<<" dhe "<<b<<" eshte: "<<p<<endl;
    cout<<"Shuma e shifrave eshte: "<<s<<endl;
    return 0; 
}