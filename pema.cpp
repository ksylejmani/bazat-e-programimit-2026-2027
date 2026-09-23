#include<iostream>
using namespace std;
int main(){
    int d1, d2, d3, d4;
    int nm; float mes;
    // cout<<"Sa molla jane ne degen 1 te pemes: ";
    // cin>>d1;
    // cout<<"Sa molla jane ne degen 2 te pemes: ";
    // cin>>d2;
    // cout<<"Sa molla jane ne degen 3 te pemes: ";
    // cin>>d3;
    // cout<<"Sa molla jane ne degen 4 te pemes: ";
    // cin>>d4;
    cout<<"Jepi mollat per te gjitha dege: ";
    cin>>d1>>d2>>d3>>d4;
    nm=d1+d2+d3+d4;
    mes=nm/4;
    cout<<"Numri total i mollave ne te gjitha deget eshte: "
        <<nm<<endl;
    cout<<"Mesatarja e mollave per nje dege te pemes: "
        <<mes<<endl;
    return 0;
}