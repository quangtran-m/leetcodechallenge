/*
https://leetcode.com/problems/move-zeroes/


*/

#include <iostream>
#include <vector>
using namespace std;


void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void moveZeroes(vector<int>& nums) {
    int i, shift = 0;
    for (i = 0; i < nums.size() - shift; i++) {
        if (nums[i+shift] == 0)
            shift++;
        nums[i] = nums[i+shift];
        //print(nums);
    }
    for (i; i < nums.size(); i++) {
        nums[i] = 0;
    }
}

// Driver code
int main() {
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    print(nums);
}