// Figure out how to find if a number is power of 2 without any loop

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTWo(int n)
{

    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{
    int n;
    cout << "Enter No.: ";
    cin >> n;

    if (isPowerOfTWo(n))
        cout << n << " is Power Of 2" << endl;
    else
        cout << n << " is not a Power of 2" << endl;

    return 0;
}