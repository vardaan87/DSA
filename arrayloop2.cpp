// To find smallest of all array and its index no.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {5, 10, -15, 20, 25, -30};
    int size = sizeof(a) / sizeof(a[0]);
    int s = INT_MAX;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (a[i] < s)
        {
            s = a[i];
            index = i;
        }
    }

    cout << "Smallest value: " << s << endl;
    cout << "Index of smallest value: " << index << endl;

    return 0;
}