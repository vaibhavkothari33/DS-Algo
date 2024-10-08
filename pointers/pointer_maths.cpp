#include <bits/stdc++.h>
using namespace std;

int main()
{
    //  int i=3;
    //  int *t = &i;
    //  cout<<(*t)++<<endl;
    //  cout<<(*t)++<<endl;
    //  cout<<++(*t)<<endl;
    // int arr[10];
    char arr[6] = "abcde";
    // cout << ch << endl;
    char *c = &arr[0];
    cout << c << endl;
    cout << "Address of first memory: " << arr << endl;
    cout << "Address of first memory: " << &arr << endl;
    cout << "Value of first memory: " << *arr << endl;
}

// #include <bits/stdc++.h>
// using namespace std;
// void print(int *p)
// {
//     cout << *p << endl; 
// }
// void update(int *p){
//     *p = *p+1;
// }
// int main()
// {
//     int value = 5;
//     int *p = &value;

//     // print(p);
//     cout<<*p<<endl;
//     update(p);
//     print(p);
//     cout<<*p<<endl;
// }