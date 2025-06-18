// Floyd Character Pattern

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    char ch = 'A';
    cout << "enter n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
