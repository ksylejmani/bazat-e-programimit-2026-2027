#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 7;
    int shpenzimet[n];
    int shuma;
    int i;
    float mesatarja;
    int x;
    cout << "Sa eshte vlera maksimale e shpenzimit te lejuar: ";
    cin >> x;
    for (i = 0; i < n; i++)
    {
        cout << "Jepe vler\x89n e dit\x89s " << i + 1 << " : ";
        cin >> shpenzimet[i];
    }
    shuma = 0;
    i = 0;
    while (i < n)
    {
        if (shpenzimet[i] > x)
        {
            break;
        }

        shuma = shuma + shpenzimet[i];
        i++; // ose i+=1, ose i=i+1
    }
    if (i >= n)
    {
        mesatarja = shuma / (float)n;
        cout << "Mesatarja e shpenzimeve ditore \x89sht\x89: "
             << setprecision(2) << fixed
             << mesatarja << endl;
    }
    else
    {
        cout << "Ne njeren prej diteve jane bere me shume shpenzime sesa lejohet " << x << endl;
    }

    return 0;
}