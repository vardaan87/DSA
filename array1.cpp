// WAF to calculate sum & product of all numbers in an array
#include <bits/stdc++.h>
using namespace std;

void sumAndProduct(int arr[], int sz, int &sum, int &product)
{
    sum = 0;
    product = 1;
    for (int i = 0; i < sz; i++)
    {
        sum = arr[i] + sum;
        product = arr[i] * product;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = sizeof(arr) / sizeof(arr[]);
    int sum, product;

    sumAndProduct(arr, sz, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}