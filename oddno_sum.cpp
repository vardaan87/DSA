// Sum of all odd numbers from  1 to n
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sumOdd = 0;
    cout << " n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sumOdd += i;
        }
    }
    cout << sumOdd;
    return 0;
}