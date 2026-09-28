#include<iostream>
#include<math.h>
using namespace std;
int main(){
   short int brinja, baza;
   int perimetri; float lartesia,syprina;
    cout<<"Jepe vleren per bazen e trekendeshit: ";
    cin>>baza;
    cout<<"Jepe vleren per krahun e trekendeshit: ";
    cin>>brinja;
    perimetri=baza+brinja*2;
    lartesia=sqrt(pow(brinja,2)-pow((float)baza/2,2));
    syprina=(baza*lartesia)/2;
    cout<<"Syprina: "<<syprina<<endl;
    cout<<"Perimetri: "<<perimetri<<endl;
    return 0;
}