// Sum of  numbers 1 to n
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << " n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    return 0;
}
