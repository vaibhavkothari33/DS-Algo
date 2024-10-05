#include <bits/stdc++.h>
using namespace std;
int sum(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a + sum(a - 1);
    }
}
int pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pow(a, b - 1);
    }
}
void rev(string str)
{
    if (str.size() == 0)
    {
        return;
    }
    else
    {
        rev(str.substr(1));
        cout << str[0];
    }
}
bool isPal(char str[], int s, int e)
{
    if (s == e)
    {
        return true;
    }
    if (str[s] != str[e])
    {
        return false;
    }
    if (s < e + 1)
    {
        return isPal(str, s + 1, e - 1);
    }
    return true;
}

int main()
{
    cout << sum(5) << endl;
    cout << pow(4, 3) << endl;
    string a = "Vaibhav";
    rev(a);
     char str[] = "geeg";
    int n = strlen(str);
    if (isPal(str,0,n-1))
    cout << "Yes";
    else
    cout << "No";
}