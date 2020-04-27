/*
https://leetcode.com/problems/search-insert-position/
Binary search
Runtime: 4 ms, faster than 97.70% of C++ online submissions for Search Insert Position.
Memory Usage: 6.9 MB, less than 100.00% of C++ online submissions for Search Insert Position.
 */

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size()-1, mid;
    while (lo <= hi) {
        mid = (lo+hi) >> 1; // Divide by 2
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    // target not found
    return lo;
}

// Driver code
int main() {
    int target = 10;
    vector<int> nums = {1, 3, 5, 7};
    cout << searchInsert(nums, target);
}