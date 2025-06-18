#include <bits/stdc++.h>
using namespace std;

bool primeOrNot(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i < n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    if (primeOrNot(num))
        cout << num << " is a number is prime number" << endl;
    else
        cout << num << " is not a number is prime number" << endl;

    return 0;
}