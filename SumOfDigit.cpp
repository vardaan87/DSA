// Sum of digits

#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main()
{
    cout << "sum: " << sum(565) << endl;

    return 0;
}