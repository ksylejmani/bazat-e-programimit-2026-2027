#include<iostream>
using namespace std;
int fitimi(int vargu[], int m){
    int rez=0;
    for(int i=0;i<=m-1;i++){
        if(vargu[i]>0){
            rez++;
        }
    }
    return rez;
}
int fitimi(int vargu[],float m){
    int rez=0;
    for(int i=0;i<m;i++){
        if(vargu[i]>9){
            rez++;
        }
    }
    return rez;
}
int humbja(int vargu[], int m){
    int rez=0;
    for(int i=0;i<m;i++){
        if(vargu[i]<0){
            rez++;
        }
    }
    return rez;
}
int main(){
    const int m=6;
    int vargu[m]={-2,6,1,3,39,12};
    cout<<"Numri i diteve me fitim eshte: "<<fitimi(vargu,m)<<endl;
    cout<<"Numri i diteve me fitim shume shifrore eshte: "<<fitimi(vargu,(float)m)<<endl;
    cout<<"Numri i diteve me humbje eshte: "<<humbja(vargu,m)<<endl;
    return 0;
}