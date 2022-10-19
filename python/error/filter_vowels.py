#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Python program to demonstrate working of the filter.

# Find the errors in the code and correct them

# function that filters vowels
def fun(variable):
    letters = ['a', 'e', 'i', 'o', 'u']
    if (variable in letters):
        return True
    else:
        return False


# sequence
sequence = ['g', 'e', 'e', 'j', 'k', 's', 'p', 'r']

# using filter function
filtered = filter(fun, sequence)

print('The filtered letters are:')

for s in filtered:
    print(s)

