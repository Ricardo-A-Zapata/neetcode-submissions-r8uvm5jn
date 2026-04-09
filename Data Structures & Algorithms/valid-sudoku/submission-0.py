import math
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [set() for _ in range(len(board))]
        cols = [set() for _ in range(len(board))]
        subboxes = [[set() for _ in range(3)] for _ in range(3)]


        for row in range(len(board)):
            for col in range(len(board)):
                num = board[row][col]
                if num == '.':
                    continue
                    
                if num in rows[row] or num in cols[col] or num in subboxes[math.floor(row / 3)][math.floor(col / 3)]:
                    return False
                rows[row].add(num)
                cols[col].add(num)
                subboxes[math.floor(row / 3)][math.floor(col / 3)].add(num)
        
        return True
        