// Pyramid pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        // number 1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // number 2
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
