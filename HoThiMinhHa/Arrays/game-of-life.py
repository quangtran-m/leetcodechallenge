class Solution:
    import copy
    def gameOfLife(self, board: List[List[int]]) -> None:
        if len(board) <= 0:
            return None;
        else :
            origin = copy.deepcopy(board)
            for i in range(len(board)):
                for j in range(len(board[0])):
                    sum = 0
                    for m in range(max(0,i-1), min(len(board),i+2)):
                        for n in range(max(0,j-1),min(len(board[0]),j+2)):
                            sum = sum + origin[m][n]
                    sum = sum - origin[i][j]
                    #Rule 1-2-3
                    if origin[i][j] == 1 :
                        if sum < 2:
                            board[i][j]=0
                        elif sum > 3:
                            board[i][j]=0
                        else:
                            board[i][j]=1
                    else: #Rule 4
                        if sum == 3:
                            board[i][j]=1
                    
