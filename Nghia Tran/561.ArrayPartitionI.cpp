/*
https://leetcode.com/problems/array-partition-i/
Runtime: 192 ms, faster than 5.10% of C++ online submissions for Array Partition I.
Memory Usage: 8.8 MB, less than 100.00% of C++ online submissions for Array Partition I.
*/

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i = 0; i < nums.size(); i=i+2) {
        sum += nums[i];
    }
    return sum;
}

// Driver code
int main() {
    vector<int> nums = {1,4,3,2};
    cout << arrayPairSum(nums);
}