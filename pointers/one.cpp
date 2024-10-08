#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int *ptr = &n;
    int vai = 9;
    int *ptr1 = &vai;
    // cout << n << endl;
    // // address of operator - > &
    // cout << &n<< endl;
    // cout << ptr<< endl;
    // cout << *ptr<< endl;
    // cout << &ptr<< endl;
    // cout<<"New pointer"<<endl;
    // cout << &ptr1<< endl;
    // cout << ++*ptr1<< endl;

    // copying of the pointer
    int num = 7;
    int *ptr2 = &num;
    int *q = ptr2;

    cout<<"*ptr2 "<<*ptr2  <<endl;
    cout<<"*q "<<  *q  <<endl;
    cout<<"&ptr2 "<<  &ptr2 <<endl;
    cout<<"*q "<< q <<endl;
    cout<<"&num "<< &num   <<endl;
    // cout<<**num<<endl;

 
}