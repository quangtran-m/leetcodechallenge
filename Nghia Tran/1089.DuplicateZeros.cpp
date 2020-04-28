/*
https://leetcode.com/problems/duplicate-zeros/
Runtime: 16 ms, faster than 97.42% of C++ online submissions for Duplicate Zeros.
Memory Usage: 7.3 MB, less than 100.00% of C++ online submissions for Duplicate Zeros.
*/


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

void duplicateZeros(vector<int>& arr) {
    queue<int> shortTermMemory;
    int shift = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            shift++;
            shortTermMemory.push(arr[i]);
        }
        if (shift > 0) {
            shortTermMemory.push(arr[i]);
            arr[i] = shortTermMemory.front();
            shortTermMemory.pop();
        }
    }
}

// Driver code
int main() {
    vector<int> nums = {1,2,3};
    duplicateZeros(nums);
    print(nums);
}