#Input an m x n matrix from user, return true if the matrix is Toeplitz. Otherwise, return false.

#A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.
#Example of a Toeplitz matrix:
# 1 2 3 4
# 5 1 2 3
# 9 5 1 2

#My solution:

class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        for i in range(len(matrix) - 1):
            for j in range(len(matrix[0]) - 1):
                if matrix[i][j] != matrix[i + 1][j + 1]:
                    return False
        return True