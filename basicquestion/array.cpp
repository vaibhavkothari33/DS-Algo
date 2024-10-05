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

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int key;
    cin>>key;
     int arr[10] = {9,6,5,22,5,75,1,5,21,85};
     for(int i=0;i<10;i++){
        if(arr[i] == key){
            cout<<"Found at index: "<<i<<endl;
            return 0;
        }
     }
    cout<<"No element found";
}