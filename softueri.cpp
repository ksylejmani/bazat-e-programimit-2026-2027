#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    short int nrr, nd, nm;
    float densiteti, mesatarja, probabiliteti;
    cout << "Shkruaj numrin e defekteve: ";
    cin >> nd;
    cout << "Shkruaj numrin e rreshtave te kodit: ";
    cin >> nrr;
    cout << "Shkruaj numrin e moduleve: ";
    cin >> nm;
    densiteti = (float)nd / nrr;
    mesatarja = (float)nrr / nm;
    probabiliteti = (float)nd / nrr * 100;
    cout << "Densiteti i defekteve eshte: "
         << setw(10)
         << setprecision(2)
         << fixed
         << densiteti
         << "\n";
    cout << "Mesatarja e rreshtave per modul eshte: "
         << setw(10)
         << setprecision(2)
         << fixed
         << mesatarja << endl;
    cout << "Probabiliteti i defekteve eshte: "
         << setw(10)
         << setprecision(2)
         << fixed
         << probabiliteti << endl;
    return 0;
}