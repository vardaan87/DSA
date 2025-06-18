#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a = 5;
    int *ptr = &a;
    int **q = &ptr;

    cout << *ptr << endl;
    cout << **q << endl;
    cout << ptr << endl;
    cout << *q << endl;

    return 0;
}
