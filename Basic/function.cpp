#include <bits/stdc++.h>
using namespace std;

// void printName(string name)
// {
//     cout << "Hey "<<name;
// }
// int main()
// {
//     string name;
//     cout<<"Enter your name: ";
//     cin>>name;

//     printName(name);

// }

int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int a = sum(num1, num2);
    cout << a;
}
