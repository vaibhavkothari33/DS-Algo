#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 20, 20, 30, 50};

    cout << "Original array" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int first_ele, last_ele, rand_ele;
    cout << "Enter the element that you want to add in the first" << endl;
    cin >> first_ele;
    arr.insert(arr.begin(), first_ele);

    cout << "New array one" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element you want to add in last" << endl;
    cin >> last_ele;
    arr.push_back(last_ele);

    cout << "New array two" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int pos;
    cout << "Enter the element at random" << endl;
    cin >> rand_ele;
    cout << "Position" << endl;
    cin >> pos;

    arr.insert(arr.begin() + pos - 1, rand_ele);
    cout << "New array three" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Deleting the first element" << endl;
    arr.erase(arr.begin());
    cout << endl;
    cout << "New array two" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Deleting the last element" << endl;
    arr.pop_back();
    cout << endl;
    cout << "New array two" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Deleting the random element at which position: " << endl;
    int n;
    cin >> n;
    arr.erase(arr.begin() - 1 + n);
    cout << endl;
    cout << "New array two" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}