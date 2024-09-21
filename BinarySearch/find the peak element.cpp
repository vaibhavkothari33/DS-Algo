class Solution {
public:
// 4 5 7 8 2 3 
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int last =nums.size()-1;
        int mid = start+(last-start)/2;
        while(start<last){
            if(nums[mid]>nums[mid+1]){
                last = mid;
            }
            else{
                start = mid+1;
            }
            mid = start+(last-start)/2;
        } 
        return start;
    }
};
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //  leetcode
    //  https://leetcode.com/problems/find-peak-element/
}