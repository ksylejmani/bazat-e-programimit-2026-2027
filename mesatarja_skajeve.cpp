#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int max = 10;
    int a[max][max];
    int m, n;
    int i, j;
    int s;
    float mes;
    do
    {
        cout << "Sa rreshta ka matrica (2-" << max << "): ";
        cin >> m;
    } while (m < 2 || m > max);
    do
    {
        cout << "Sa kolona ka matrica (2-" << max << "): ";
        cin >> n;
    } while (n < 2 || n > max);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> a[i][j];
        }
    }
    s = 0;
    i = 0;
    do
    {
        j = 0;
        do
        {
            // anetari eshte ne skaj: rreshti i pare, i fundit, kolona e pare ose e fundit
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
            {
                s = s + a[i][j];
            }
            j = j + 1;
        } while (j < n);
        i = i + 1;
    } while (i < m);
    mes = s / (float)(2 * m + 2 * n - 4);
    cout << "Mesatarja e an\x89tar\x89ve n\x89 skajet e matric\x89s \x89sht\x89: "
         << setprecision(2) << fixed
         << mes << endl;

    return 0;
}
