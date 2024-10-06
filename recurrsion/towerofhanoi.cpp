// #include <iostream>
// using namespace std;

// // Function to solve the Tower of Hanoi problem
// void towerOfHanoi(int n, char source, char destination, char auxiliary)
// {
//     if (n == 1)
//     {
//         cout << "Move disk 1 from " << source << " to " << destination << endl;
//         return;
//     }
//     // Step 1: Move n-1 disks from source to auxiliary, using destination as the auxiliary
//     towerOfHanoi(n - 1, source, auxiliary, destination);
//     // Step 2: Move the nth disk from source to destination
//     cout << "Move disk " << n << " from " << source << " to " << destination << endl;

//     // Step 3: Move the n-1 disks from auxiliary to destination, using source as the auxiliary
//     towerOfHanoi(n - 1, auxiliary, destination, source);
// }

// int main()
// {
//     int n; // Number of disks

//     // Take input for the number of disks
//     cout << "Enter the number of disks: ";
//     cin >> n;

//     // Call the Tower of Hanoi function
//     towerOfHanoi(n, 'A', 'C', 'B'); // A = Source, C = Destination, B = Auxiliary

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void towerofhanoi(int n,char start,char end,char temp,int &move){
//     if(n==1){
//         cout<<"Move disk 1 from "<< start << " to "<<end<<endl;
//         move++;
//         return;
//     }
//     towerofhanoi(n-1,start,temp,end,move);
//     cout<<"Move disk "<<n<<" from "<<start <<" to "<<end<<endl;
//     move++;
//     towerofhanoi(n-1,temp,end,start,move);
// }
// int main()
// {
//      int n;
//      int move=0;
//      cout<<"Enter the numbe of disks: "<<endl;
//      cin>>n;
//      towerofhanoi(n,'A','C','B',move);
//      cout<<"Total moves: "<<move<<endl;
//      return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void towerofhanoi(int n, char a, char c, char b, int &move)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << a << " to " << b << endl;
        move++;
        return ;
    }
    towerofhanoi(n-1,a,c,b,move);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<b<<endl;
    move++;
    towerofhanoi(n-1,c,b,a,move);

}
int main()
{
    int n;
    int move =0;
    cout<<"Enter";
    cin>>n;
    towerofhanoi(n,'A','B','C',move);
    cout<<"Total move: "<<move<<endl;
    return 0;
}