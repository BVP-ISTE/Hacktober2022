# Pascal's Triangle
# In Pascal's triangle, each number is the sum of the two numbers directly above it
# For example, for 4 rows, the Pascal's triangle would be
#    1
#   1 1
#  1 2 1
# 1 3 3 1
# Take number of rows as input from the user

from math import factorial

n = int(input())
for i in range(n):
    for j in range(n-i+1):

        # for left spacing
        print(end=" ")

    for j in range(i+1):

        # nCr = n!/((n-r)!*r!)
        print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")

    # for new line
    print()
