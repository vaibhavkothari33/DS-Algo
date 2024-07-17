#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 19, 28, 36, 47};

    int target;
    cout << "Enter the element you want to serach: ";
    cin >> target;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index " << i << endl;
        }
    }
}