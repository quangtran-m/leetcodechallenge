/*
https://leetcode.com/problems/count-number-of-teams/
Runtime: 4 ms, faster than 99.16% of C++ online submissions for Count Number of Teams.
Memory Usage: 7.7 MB, less than 100.00% of C++ online submissions for Count Number of Teams.
*/

#include <iostream>
#include <vector>
using namespace std;

/*
Assume that we have counted the number of soldiers with less rating and greater rating
on the left and right of every soldier.

Consider the soldier i in the array. Make this soldier the 2nd member of a team:
There will be x ways to choose the 1st member, and y ways to choose the 3rd member
x = lessOnLeft and y = greaterOnRight, or
x = greaterOnLeft and y = lessOnRight

So the number of ways to form a team with this soldier being the 2nd member is:
lessOnLeft * 1 * greaterOnRight + greaterOnLeft * 1 * lessOnRight
*/

int numTeams(vector<int>& rating) {
    int ans = 0;
    int lessOnLeft, lessOnRight;
    int greaterOnLeft, greaterOnRight;

    for (int i = 0; i < rating.size() - 1; i++) {
        lessOnLeft = 0; lessOnRight = 0;
        greaterOnLeft = 0; greaterOnRight = 0;
        for (int j = 0; j < rating.size(); j++) {
            if (rating[i] < rating[j])
                if (i < j)
                    lessOnLeft++;
                else
                    lessOnRight++;
            else if (rating[i] > rating[j])
                if (i < j)
                    greaterOnLeft++;
                else
                    greaterOnRight++;
        }
    ans += lessOnLeft * greaterOnRight + lessOnRight * greaterOnLeft;
    }
    return ans;
}

// Driver code
int main() {
    vector<int> nums = {2,5,3,4,1};
    vector<int> nums2 = {2,1,3};
    vector<int> nums3 = {1,2,3,4};

    cout << numTeams(nums3);
}