#include<iostream>
using namespace std;
int main(){
    float mes;
    int bursa;
    cout<<"Sa eshte mesatarja e studentes: ";
    cin>>mes;
    bursa=(mes>=9)?(800):(0);
    cout<<"Bursa: "<<bursa<<endl;
    return 0;
}