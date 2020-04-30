/*
https://leetcode.com/problems/count-square-submatrices-with-all-ones/
Runtime: 64 ms, faster than 73.24% of C++ online submissions for Count Square Submatrices with All Ones.
Memory Usage: 13.8 MB, less than 100.00% of C++ online submissions for Count Square Submatrices with All Ones.
*/

#include <iostream>
#include <vector>

using namespace std;

int min(int a, int b, int c) {
    int minimum;
    if (a < b) minimum = a;
    else minimum = b;
    if (minimum > c) minimum = c;
    return minimum;
}

int countSquares(vector<vector<int>>& matrix) {
    int count = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            if (matrix[i][j] == 1 && i >= 1 && j >= 1)
                matrix[i][j] += min(matrix[i][j-1], matrix[i-1][j-1], matrix[i-1][j]);
            count += matrix[i][j];
        }
    }
    return count;
}

// Driver code
int main() {
    vector<vector<int>> mat =
    {
        {0,1,1,1},
        {1,1,1,1},
        {0,1,1,1}
    };
    vector<vector<int>> mat2 =
    {
        {1,0,1},
        {1,1,0},
        {1,1,0}
    };
    vector<vector<int>> mat3 = {
        {1},
        {1},
        {1},
        {1}
    };

    cout << countSquares(mat3);
}