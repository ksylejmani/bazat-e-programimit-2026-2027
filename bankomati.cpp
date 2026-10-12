#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int dita, nr_personave, nr_bankomatave;
    double koha_e_pritjes;
    cout<<"Shkruani diten (1 - 7): ";
    cin>>dita;
    cout<<"Shkruani numrin e personave: ";
    cin>>nr_personave;
    cout<<"Shkruani numrin e bankomatave: ";
    cin>>nr_bankomatave;
    switch (dita)
    {
    case 1:
    case 2: 
    case 3:
    case 4:
    case 5:
        koha_e_pritjes=5+3*(float)nr_personave/nr_bankomatave;
        cout<<"Koha e pritjes eshte: "<<koha_e_pritjes<<endl;
        break;
    case 6:
    case 7:
        koha_e_pritjes=3*(float)nr_personave/nr_bankomatave;
        cout<<"Koha e pritjes eshte: "<<koha_e_pritjes<<endl;
        break;
    default:
        cout<<"Dite e javes nuk eshe e sakte\n";
        break;
    }
    return 0;
}