#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int *ptr = &n;
    cout << n << endl;
    // address of operator - > &
    cout << &n;

    cout << endl;

    cout << ptr;

    cout << endl;

    cout << *ptr;

    cout << endl;

    cout << &ptr;
}