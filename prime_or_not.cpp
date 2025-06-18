// Check if a number is prime or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter No. ";
    cin >> n;
    bool isPrime = true;

    // for (int i = 2; i <= n - 1; i++)
    for (int i = 2; i <= sqrt(n); i++)

    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime No." << endl;
    }
    else
    {
        cout << "Not a Prime No." << endl;
    }
    return 0;
}