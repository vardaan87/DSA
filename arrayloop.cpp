// To find smallest of all array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (a[i] < smallest)
        // {
        //     smallest = a[i];
        // }
        smallest = min(a[i], smallest);
    }
    cout << "smallest : " << smallest << endl;
    return 0;
}