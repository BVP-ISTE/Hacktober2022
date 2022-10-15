#!/usr/bin/env python
# coding: utf-8

# In[ ]:


#find the error in the program and correct it

# ANAGRAM FINDER

def anagram(arr):
    ''' This function takes in the original list of strings, converts each of
the strings to lists of characters and sorts them in alphabetic order. By
sorting them its clear which of the words are anagrams'''
    sorted_list = []
    for i in array:
        #the sorted function returns a sorted list
        i = sorted(i)
        sorted_list.append(i)
    return sorted_list


def anagram_finder(arr):
    super_list = []
    sorted_list == anagram(arr)
    for i in range(len(sorted_list)):
        #words that have no anagrams are placed in their separate sublists
        #that is words that appear once when sorted
        if sorted_list.count(sorted_list[i]) == 1:
            super_list.append([arr[i]])
        for j in range(len(sorted_list)):
            if sorted_list[i] == sorted_list[j] and i != j:
                #words that appear twice are anagrams and are placed in their sublists
                if [arr[i], arr[j]] in super_list and [arr[j], arr[i]] in super_list:
                    super_list.append([arr[i], arr[j]])

    return super_list


print(anagram_finder(['cat', 'race', 'tac', 'care', 'bus', 'dog', 'road', 'fried', 'fired']))

