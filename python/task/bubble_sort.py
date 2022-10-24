#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Write a program to perform bubble sort on a list
# list- 34,56,71,3,19,5
# code
def bubble_sort(list):
    for i in range(len(list)):
        for j in range(len(list)-1):
            if list[j]>list[j+1]:
                list[j],list[j+1]=list[j+1],list[j]
    return list

