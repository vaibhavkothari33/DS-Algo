#include <bits/stdc++.h>
using namespace std;
// Time complexity  - 0(n)
// space complexity - 0(1)
void sort01(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        while (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

int main()
{
}