
#include <iostream>
using namespace std;

bool IsPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int CountPrimes(int vargu[], int m) {
    int ans = 0;

    for (int i = 0; i < m; i++) {
        if (IsPrime(vargu[i])) {
            ans++;
        }
    }

    return ans;
}

int SumPrimes(int vargu[], int m) {
    int sum = 0;

    for (int i = 0; i < m; i++) {
        if (IsPrime(vargu[i])) {
            sum += vargu[i];
        }
    }

    return sum;
}

int main() {
    int num;
    const int m = 7;
    int vargu[m] = {7, 12, 4, 19, 21, 25, 135};

    cout << "Insert number: ";
    cin >> num;

    if (IsPrime(num)) {
        cout << num << " eshte numer i thjeshte." << endl;
    } else {
        cout << num << " nuk eshte numer i thjeshte." << endl;
    }

    cout << "Numri i vlerave prime eshte: "
         << CountPrimes(vargu, m) << endl;

    cout << "Shuma e vlerave prime eshte: "
         << SumPrimes(vargu, m) << endl;

    return 0;
}
