class Solution {
public:
//  7 8 9 --- 1 2 3 4
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;

        while (low <= high) {
        int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[low] <= nums[mid]) {

                if (nums[low] <= target && nums[mid] >= target) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } 
            else {
                if (nums[mid] <= target && nums[high] >= target) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //  leetcode:
    // https://leetcode.com/problems/search-in-rotated-sorted-array/
}