#include<iostream>
using namespace std;
int shuma(int vargu[], int m){
    int rez=0;
    for(int i=0;i<m;i++){
        rez+=vargu[i];
    }
    return rez;
}
int shuma(int vargu[], int m, int min, int max){
    int rez=0;
    for(int i=0;i<m;i++){
        if(vargu[i]>=min && vargu[i]<=max){
            rez+=vargu[i];
        }
    }
    return rez;
}
int shuma(int vargu[], int m, int c){
    int rez=0;
    for(int i=0;i<m;i++){
        if(vargu[i]!=c){
            rez+=vargu[i];
        }
    }
    return rez;
}
int main(){
    const int m=6;
    int vargu[m]={4,-2,6,-5,1,7};
    int a=6,b=2,c=-5;
    int min=(a<b)?(a):(b);
    int max=(a>b)?(a):(b);
    cout<<"Shuma e anetareve te vargut: "<<shuma(vargu,m)<<endl;
    cout<<"Shuma e anetareve te vargut nga "
        <<min<< " deri ne "<<max
        <<" eshte : "<<shuma(vargu,m,min,max)<<endl;
    cout<<"Shuma e anetareve te vargut qe jane te ndryshem nga "
        <<c<<" eshte :"<<shuma(vargu,m,c)<<endl;

    return 0;
}