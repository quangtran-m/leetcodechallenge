class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        dt, r, c = collections.defaultdict(list), len(mat), len(mat[0])
        for i in range(r):
            for j in range(c):
                dt[i-j].append(mat[i][j])
        #print(dt)
        for k in dt: dt[k].sort(reverse=True)
        for i in range(r):
            for j in range(c):
                mat[i][j] = dt[i-j].pop()
        return mat
