#include<iostream>
#include<math.h>
using namespace std;
int main(){
   short int brinja, baza;
   int perimetri; float lartesia,syprina,kendi;
    cout<<"Jep vleren per bazen e trekendeshit: ";
    cin>>baza;
    cout<<"Jep vleren per krahun e trekendeshit: ";
    cin>>brinja;
    perimetri=baza+brinja*2;
    lartesia=sqrt(pow(brinja,2)-pow((float)baza/2,2));
    syprina=(baza*lartesia)/2;
    kendi=acos(((float)baza/2)/brinja)*180/3.14159265;
    cout<<"Syprina: "<<syprina<<endl;
    cout<<"Perimetri: "<<perimetri<<endl;
    cout<<"Lartesia: "<<lartesia<<endl;
    cout<<"Kendi te baza: "<<kendi<<" grade"<<endl;
    return 0;
}