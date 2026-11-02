#include<iostream>
using namespace std;
int main(){
    const int m=7;
    int max;
    int vargu[]={12,8,15,20,10,11,7};
    int i=1;
    max=vargu[0];
    cout<<"Test3\n";
    while (i<m)
    {
        if(vargu[i]>max){
            max=vargu[i];
            cout<<"Test2\n";
        }
        i++;
        cout<<"Test1\n";
    }
    cout<<"Vlera maksimale eshte: "<<max<<endl;
    return 0;
}