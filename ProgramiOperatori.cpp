#include<iostream>
using namespace std;
enum operatori{
    VALA=1,
    IPKO,
    KUJTESA,
    ART_MOTION,
    TELKOS
};
float llogarit_taksat_ne_fitim(float fitimi[], int m, operatori o){
    float rez=0;
    int s=0;
    for(int i =0;i<m;i++){
        s=s+fitimi[i];
    }
    if(s>0){
        if(o==VALA){
            rez=s;
        }
        else{
            rez=s*0.1;
        }
    }
    return rez;
}
int main(){
    const int m=6;
    float fitimi[m]={4,-2,6,-5,1,7};
    operatori o;
    int intO;
    float rez;
    cout<<"Jepe opratorin (VALA-1, IPKO-2, KUJTESA-3, ART MOTIOIN-4, TELKOS-5):";
    cin>>intO;
    o=static_cast<operatori>(intO);
    rez=llogarit_taksat_ne_fitim(fitimi,m,o);
    cout<<"Tatimi ne fitim eshte "<<rez<<" milion."<<endl;
    return 0;
}