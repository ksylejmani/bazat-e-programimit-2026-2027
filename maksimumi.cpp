#include <iostream>

using namespace std;

int main()
{
    const int n = 100;
    int d[n];
    int m;
    int i;
    int max;
    do
    {
        cout << "Sa an\x89tar\x89 ka vargu (1-" << n << "): ";
        cin >> m;
    } while (m < 1 || m > n);
    for (i = 0; i < m; i++)
    {
        cout << "d[" << i + 1 << "] = ";
        cin >> d[i];
    }
    max = d[0];
    i = 1; // anetari i dyte i vargut
    while (i < m)
    {
        if (d[i] > max)
        {
            max = d[i];
        }
        i++;
    }
    cout << "Vlera maksimale n\x89 varg \x89sht\x89: " << max << endl;

    return 0;
}
