#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    short int nrr, nd, nm;
    float densiteti, mesatarja, probabiliteti, defekte_per_modul;

    cout << "Shkruaj numrin e defekteve: ";
    cin >> nd;
    cout << "Shkruaj numrin e rreshtave te kodit: ";
    cin >> nrr;
    cout << "Shkruaj numrin e moduleve: ";
    cin >> nm;

    // Kontroll i drejtpërdrejtë kundër pjesëtimit me zero
    if (nrr <= 0 || nm <= 0) {
        cout << "Gabim: Numri i rreshtave dhe i moduleve duhet te jete me i madh se 0." << endl;
        return 1;
    }

    densiteti = (float)nd / nrr;
    mesatarja = (float)nrr / nm;
    probabiliteti = ((float)nd / nrr) * 100;
    defekte_per_modul = (float)nd / nm;

    cout << fixed << setprecision(2);
    cout << "Densiteti i defekteve eshte:      " << setw(10) << densiteti << "\n";
    cout << "Mesatarja e rreshtave per modul:  " << setw(10) << mesatarja << "\n";
    cout << "Probabiliteti i defekteve eshte:  " << setw(10) << probabiliteti << "%\n";
    cout << "Defektet per modul:               " << setw(10) << defekte_per_modul << "\n";

    return 0;
}