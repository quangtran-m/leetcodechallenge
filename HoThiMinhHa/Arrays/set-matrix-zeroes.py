#https://leetcode.com/problems/set-matrix-zeroes/
class Solution:
    import copy
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        origin = copy.deepcopy(matrix)
        for i in range(len(origin)):
            for j in range(len(origin[0])):
                if origin[i][j]==0:
                    for m in range(len(matrix)):
                        matrix[m][j]=0
                    matrix[i]=[0 for i in range(len(matrix[0]))]
        
