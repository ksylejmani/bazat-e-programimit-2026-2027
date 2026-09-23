#include<iostream>
using namespace std;
int main(){
    int d1, d2, d3, d4;
    int nm; float mes;
    int arka, mbetja;
    cout<<"Jepi mollat per te gjitha deget: ";
    cin>>d1>>d2>>d3>>d4;
    nm=d1+d2+d3+d4;
    mes=nm/4.0;          // 4.0 dhe jo 4, per te shmangur pjesetimin e plote
    arka=nm/6;           // numri i arkave te plota
    mbetja=nm%6;         // mollat qe mbeten jashte arkave
    cout<<"Numri total i mollave ne te gjitha deget eshte: "
        <<nm<<endl;
    cout<<"Mesatarja e mollave per nje dege te pemes: "
        <<mes<<endl;
    cout<<"Numri i arkave te plota (me nga 6 molla): "
        <<arka<<endl;
    cout<<"Mollat qe mbeten jashte arkave: "
        <<mbetja<<endl;
    return 0;
}