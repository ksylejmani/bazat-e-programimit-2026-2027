#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double dita, koha_e_pritjes, pjesa_dhjetore;
    int nr_personave, nr_bankomatave;

    do {
        cout << "Shkruani diten (1 - 7): ";
        cin >> dita;

        pjesa_dhjetore = dita - (int)dita;

        if (dita < 1 || dita > 7 || pjesa_dhjetore != 0) {
            cout << "Dita e javes nuk eshte e sakte. Provoni perseri!\n";
        }

    } while (dita < 1 || dita > 7 || pjesa_dhjetore != 0);

    cout << "Shkruani numrin e personave: ";
    cin >> nr_personave;

    cout << "Shkruani numrin e bankomatave: ";
    cin >> nr_bankomatave;

    switch ((int)dita) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            koha_e_pritjes = 5 + 3.0 * nr_personave / nr_bankomatave;
            cout << "Koha e pritjes eshte: " << koha_e_pritjes << endl;
            break;

        case 6:
        case 7:
            koha_e_pritjes = 3.0 * nr_personave / nr_bankomatave;
            cout << "Koha e pritjes eshte: " << koha_e_pritjes << endl;
            break;
    }

    return 0;
}