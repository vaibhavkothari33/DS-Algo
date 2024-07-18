#include <bits/stdc++.h>
using namespace std;
// coding ninjas
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // rember to sort the final vector
    sort(ans.begin(), ans.end());
    return ans;
}
// print the index of the target sum
// Leetcode
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //    vector< vector<int>>ans;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        
    return {};
    }
};
int main()
{
}