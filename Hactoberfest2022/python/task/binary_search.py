#!/usr/bin/env python
# coding: utf-8

# In[ ]:


def binarySearch(nums, item):

   """Complete this function to perform binary search"""

def main():

    nums = [2, 4, 5, 8, 9, 20, 45, 60, 91]
    item = 60
    result = binarySearch(nums, item)

    if result != -1:
        print("FOUND! Index: {} ".format(result))
    else:
        print("NOT FOUND...")

if __name__ =="__main__":
    main()

