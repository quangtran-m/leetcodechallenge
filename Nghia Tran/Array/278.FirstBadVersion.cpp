/*
https://leetcode.com/problems/first-bad-version/
Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
Memory Usage: 5.9 MB, less than 100.00% of C++ online submissions for First Bad Version.
*/

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> nums);

bool isBadVersion(int i) {
    static bool st[1] = {1};
    return st[i-1];
}

int firstBadVersion(int n) {
    long long lo = 1, hi = n, mid;
    while (lo <= hi) {
        mid = (hi + lo) / 2;
        if (isBadVersion(mid)) {
            if ((mid > 1) && isBadVersion(mid - 1))
                hi = mid-1;
            else
                break;
        } else {
            lo = mid + 1;
        }
    }
    return mid;
}

// Driver code
int main() {
    cout << firstBadVersion(1);
}

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}