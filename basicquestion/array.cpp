// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << sizeof(arr) << endl;
//     cout << sizeof(arr[0]) << endl;
//     cout << n << endl;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;

//     int newele = 52;

//     for(int i=n;i<1;i++){
//         arr[i-1] = arr[i];
//     }

//     arr[0] = newele;

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4];
//     for (int i = 0; i < 4; i++)
//     {
//         cin >> arr[i];
//     }
//     // l1 r1 l2 r2
//     if(arr[1]<arr[2]){
//         cout<<-1;
//     }
//     else if(arr[3]<arr[0]){
//         cout<<-1;
//     }
//     else if(arr[0]<=arr[2] && arr[1]<=arr[3]){
//         cout<<arr[2]<<" "<<arr[1]<<endl;
//     }
//     else if(arr[2]<=arr[0] && arr[3]<=arr[1]){
//         cout<<arr[0]<<" "<<arr[3]<<endl;
//     }
//     else if(arr[0]<=arr[2] && arr[3]<=arr[1]){
//         cout<<arr[2]<<" "<<arr[3]<<endl;
//     }
//     else if(arr[2]<=arr[0] && arr[1]<=arr[3]){
//         cout<<arr[0]<<" "<<arr[1]<<endl;
//     }
//     else{
//         cout<<-1;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int key;
//     cin>>key;
//      int arr[10] = {9,6,5,22,5,75,1,5,21,85};
//      for(int i=0;i<10;i++){
//         if(arr[i] == key){
//             cout<<"Found at index: "<<i<<endl;
//             return 0;
//         }
//      }
//     cout<<"No element found";
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    if (c1 != r2)
    {
        cout << "Matrixes cannot be multiplied" << endl;
        return 0;
    }
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
             result[i][j]=0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                result[i][j]+=mat1[i][k] * mat2[k][j];
            }
        }
    }
       for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<result[i][j];
        }
    }
    cout<<endl;
    return 0;
    
}