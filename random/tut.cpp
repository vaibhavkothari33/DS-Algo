// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // char *ptr;
//     // ptr = "hello";
//     // cout << *ptr;
  
  
//     int a=8;
//  int b=6;
//  int c;
//  c= (a>b) ? a:b;
//  cout<<c;
// }

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //  int i;
    //  int j=10;
    // i = (j++,j+100,999+j);
    // cout<<i<<endl;
    // cout<<j<<endl;

int i[5]={5,6,7,8,9}; 
int *ptr; 
ptr=&i[0]; 
cout<<"Value of *ptr is : "<<*ptr<<"\n"; 
cout<<"Value of *ptr++ : "<<*ptr++; 
cout<<"Value of *ptr++ : "<<*ptr++; 
return 0; 
}