
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    const int m = 6;
    const int pragu = 16;
    short int piket[m];
    int kalueshmeria = 0;
    int shuma = 0;

    for (int i = 0; i < m; i++) {
        do {
            cout << "Sa pike ka arritur studenti/ja " << i + 1 << " (0-40): ";
            cin >> piket[i];

            if (piket[i] < 0 || piket[i] > 40) {
                cout << "Gabim! Piket duhet te jene nga 0 deri ne 40.\n";
            }
        } while (piket[i] < 0 || piket[i] > 40);
    }

    int i = 0;
    while (i < m) {
        shuma += piket[i];

        if (piket[i] >= pragu) {
            kalueshmeria++;
        }
        i++;
    }

    cout << "\n--- Rezultatet e kollokviumit ---\n";
    cout << "Gjithsej studente: " << m << endl;
    cout << "Kane kaluar: " << kalueshmeria << endl;
    cout << "Nuk kane kaluar: " << m - kalueshmeria << endl;
    cout << "Mesatarja e pikeve: " << setprecision(2)<<fixed<<(double)shuma / m << endl;
    cout << "Kalueshmeria: " << 100.0 * kalueshmeria / m << "%\n";

    return 0;
}
