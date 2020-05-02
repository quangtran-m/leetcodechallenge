#https://leetcode.com/problems/rotate-image/
class Solution:
    import copy
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        #0,0=> 0,2
        #0,1=>1,2
        #0,2=>2,2
        #1,2=>2,1
        #2,2=>2,0
        #2,1=>1,0
        #2,0=>0,0
        #1,0=>0,1
        
        #n=len(matrix)-1
        #[0,j]=>[j,n-0]
        #[i,n]=>[n,n-i]
        #[i,j]=>[j,n-i]  <--> origin[n-j,i] = matrix[i,j]
        
        origin=copy.deepcopy(matrix)
        n=len(matrix)
        for i in range(n):
            for j in range(n):
                matrix[i][j]=origin[n-1-j][i]
        
                
