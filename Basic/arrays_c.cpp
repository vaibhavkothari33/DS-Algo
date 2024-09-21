// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2]>>arr[3] >> arr[4];
//     cout<< arr[0] <<" "<< arr[1] <<" "<< arr[2]<<" "<<arr[3] <<" "<< arr[4];

//     // int arr[3][5];

// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}