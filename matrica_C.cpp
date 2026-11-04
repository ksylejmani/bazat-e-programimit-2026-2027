#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int m=7;
    int A[m]={2,-1,10,7,6,5,-12};
    int B[m][m];
    int C[m+1][m+1];
    int i,j;

    // Matrica B (si ne tabele: te gjitha elementet 1)
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            B[i][j]=1;

    // Formimi i matrices C sipas bllok diagramit (indekset 1..m+1)
    i=1;
    do{
        j=1;
        do{
            if(i<=m && j<=m)
                C[i-1][j-1]=B[i-1][j-1];          // c_ij = b_ij
            else if(i>m && j<=m)
                C[i-1][j-1]=A[i-m+(j-1)-1];       // c_ij = a_(i-m+(j-1))
            else
                C[i-1][j-1]=-5;                   // c_ij = -5
            j++;
        }while(j<=m+1);
        i++;
    }while(i<=m+1);

    // Shtypja e matrices C
    cout<<"Matrica C:\n\n";
    for(i=0;i<m+1;i++){
        for(j=0;j<m+1;j++)
            cout<<setw(5)<<C[i][j];
        cout<<endl;
    }
    return 0;
}
