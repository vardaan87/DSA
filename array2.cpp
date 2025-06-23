// WAF to swap the max & min numbers in an array.

#include <bits/stdc++.h>
using namespace std;

void swapMaxMin(int arr[], int sz)
{
    if (sz == 0)
        return;

    int maxIndex = distance(arr, max_element(arr, arr + sz));
    int minIndex = distance(arr, min_element(arr, arr + sz));

    swap(arr[maxIndex], arr[minIndex]);
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    swapMaxMin(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}