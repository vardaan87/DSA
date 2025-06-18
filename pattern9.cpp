// Inverted Triangle Pattern
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Num
        for (int j = 0; j < n - i; j++)
        {
            cout << (i + 1);
        }

        cout << endl;
    }

    return 0;
}
