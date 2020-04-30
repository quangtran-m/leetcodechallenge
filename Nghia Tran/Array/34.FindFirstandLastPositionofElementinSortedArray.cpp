/*
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Runtime: 16 ms, faster than 8.14% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
Memory Usage: 13.7 MB, less than 5.49% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans(2, -1); // construct a vector [-1, -1]
    int hi = nums.size() - 1, lo = 0, mid;
    while (hi >= lo) {
        mid = (hi + lo)/2;
        if (nums[mid] == target) {
            int i = mid;
            while (i > 0 && nums[i-1] == nums[mid])
                i--;
            ans[0] = i;
            i = mid;
            while (i < nums.size()-1 && nums[i+1] == nums[mid])
                i++;
            ans[1] = i;
            break;
        } else if (nums[mid] > target) {
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    return ans;
}

// Driver code
int main() {
    int target = 5;
    int target2 = 6;
    vector<int> nums = {5};
    print(searchRange(nums, target));
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}