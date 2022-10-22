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


def floorSqrt(x):

	# Base cases
	if (x == 0 or x == 1):
		return x

	# Starting from 1, try all numbers until
	# i*i is greater than or equal to x.
	i = 1
	result = 1
	while (result <= x):

		i += 1
		result = i * i

	return i - 1


# Driver Code
x = 11
print(floorSqrt(x))


