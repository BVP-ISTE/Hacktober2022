#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Python program to check if two lists have at-least
# one element common using traversal of list

#Find the errors in the code and correct the,

def common_data(list1, list2):
	result = False

	# traverse in the 1st list
	for x in list1:

		# traverse in the 2nd list
		for y in list2:
	
			# if one common
			if x == y:
				result = True
				return result
				
	return result
	
# driver code
a = [1, 2, 3, 4, 5]   #Since 5 is common in both the lists, the output should be True
b = [5, 6, 7, 8, 9]
print(common_data(a, b))

a = [1, 2, 3, 4, 5]   #Since nothing is common in both the lists, the output should be False
b = [6, 7, 8, 9]
print(common_data(a, b))

