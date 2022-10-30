# Given a non-negative integer x, compute and return the square root of x.
# Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
# Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

# Example 1:
# Input: x = 4
# Output: 2

# Example 2:
# Input: x = 8
# Output: 2
# Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.

# Python3 program to find floor(sqrt(x)

# Returns floor of square root of x


class Solution:
    def mySqrt(self, x: int) -> int:
        x_previous = x
        x_current = x / 2
        precision = 0.1
        while abs(x_previous - x_current) > precision:
            x_previous = x_current
            x_current = (1/2) * (x_current + x/x_current)
            
        return int(x_current)
