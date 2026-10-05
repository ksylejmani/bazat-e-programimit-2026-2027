#include<iostream>
using namespace std;
int main(){
    float mes;
    int bursa;
    string emri;
    cout<<"Shkruaj emrin e studentes: ";
    cin>>emri;
    cout<<"Sa eshte mesatarja e studentes: ";
    cin>>mes;
    if(mes>=9){
        bursa=800;
    }
    else if(mes>=7.5){
        bursa=400;
    }
    else{
        bursa=0;
    }
    cout<<"Bursa e "<<emri<<": "<<bursa<<endl;
    return 0;
}