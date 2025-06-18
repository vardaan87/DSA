#include <bits/stdc++.h>
using namespace std;

int factorialN(int N)
{
    int fact = 1;

    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << factorialN(5) << endl;

    return 0;
}