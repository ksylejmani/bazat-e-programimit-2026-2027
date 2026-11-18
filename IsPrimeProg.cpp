#include<iostream>
#include<cmath>
using namespace std;
bool IsPrime(int num){
    bool result=true;
    for(int i=2;i<sqrt(num);i++){
        cout<<"TEST_A\n";
        if(num%i==0){
            cout<<"TEST_B\n";
            result=false;
            break;
        }
    }
    return result;
}
int main(){
    int num;
    cout<<"Insert number: ";
    cin>>num;
    bool result=IsPrime(num);
    cout<<"Numri eshte i thjeshte: "<<result<<endl;
    return 0;
}