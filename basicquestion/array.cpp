#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;
    cout << n << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    // n=n+1;
    int newele = 52;

    for(int i=n;i<1;i++){
        arr[i-1] = arr[i];
    }

    arr[0] = newele;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

}