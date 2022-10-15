
# coding: utf-8

# In[ ]:


# Write a program to multiply two matrices 

# 3x3 matrix
X = [      [12,7,3],
               [4 ,5,6],
               [7 ,8,9]  ]
# 3x4 matrix
Y = [ [5,8,1,2],
          [6,7,3,0],
          [4,5,9,1] ]


# we can change matrices by altering the values of the matrices.

# 1st Matrix
X = [[12, 7, 3],
	[4, 5, 6],
	[7, 8, 9]]

# 2nd Matrix
Y = [[5, 8, 1, 2],
	[6, 7, 3, 0],
	[4, 5, 9, 1]]
	
result= [[0, 0, 0, 0],
        [0, 0, 0, 0],
        [0, 0, 0, 0]]

#Because when we multiply 3X3 (AXB) matrix to a 3X4 (PXQ) matrix, the resultant matrix is of the order 3X4 (AXQ)


# Code to multiply them 

for i in range(len(X)):
	for j in range(len(Y[0])):
		for k in range(len(Y)):
			result[i][j] += X[i][k] * Y[k][j]

for res in result:
	print(res)
