// Sum of all numbers from 1 to N which are divisible by 3
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}