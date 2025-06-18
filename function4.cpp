// WAF to print all prime numbers from 2 to N

#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to print all prime numbers from 2 to N
void printPrimesUpToN(int N)
{
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Prime numbers from 2 to " << N << " are: ";
    printPrimesUpToN(N);

    return 0;
}
