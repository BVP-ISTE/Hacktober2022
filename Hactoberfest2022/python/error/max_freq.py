#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Maximum Frequency

#Program to find and return the number which occurs the 
#maximum times in the given input.
#If two or more elements contend for the maximum frequency, returned the 
#element which occurs in the array first.

#Find the errors in the code and correct them

def maxFreq(l):
    d = {}
    for w in l:
        if w in d:
            d[w] ++ 1
        else: # if the element is not there in the dictionary then adding it to 'd'
            d[w] = 1

    final = max(d, key= lambda x: d[x]) # enhanced max function
    return final


# Main
# n = int(input()) # also I don't know why you are taking n as input. 
l = list(str(i) for i in input().strip().split(' '))
print(maxFreq(l))

