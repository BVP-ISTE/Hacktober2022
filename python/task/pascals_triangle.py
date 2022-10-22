#Pascal's Triangle
#In Pascal's triangle, each number is the sum of the two numbers directly above it
#For example, for 4 rows, the Pascal's triangle would be
#    1
#   1 1
#  1 2 1
# 1 3 3 1
#Take number of rows as input from the user


# Function to print
# first n lines of
# Pascal's Triangle
def printPascal(n) :
	
	# Iterate through every line
	# and print entries in it
	for line in range(0, n) :
		
		# Every line has number of
		# integers equal to line
		# number
		for i in range(0, line + 1) :
			print(binomialCoeff(line, i),
				" ", end = "")
		print()
	


def binomialCoeff(n, k) :
	res = 1
	if (k > n - k) :
		k = n - k
	for i in range(0 , k) :
		res = res * (n - i)
		res = res // (i + 1)
	
	return res

# Driver program
n = 7
printPascal(n)




