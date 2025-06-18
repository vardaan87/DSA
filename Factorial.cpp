// Print Factorial of a number N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, fac = 1;
    cout << "Enter N: ";
    cin >> N;

    if (N < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else

        for (int i = 1; i <= N; i++)
        {
            fac *= i;
        }
    cout << fac << endl;
    return 0;
}
