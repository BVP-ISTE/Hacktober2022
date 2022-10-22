#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Count occurrence of a character in a Python string

# sentence = 'The Udacity Udacity'
# ch = 'e'

sentence = input("Enter a valid sentence : ")
ch = input("Enter a character to search occurance of in the above sentence : ")

ch_occurance = sentence.count(ch)
print("The world %s appears %s times in the sentence %s" %(ch, ch_occurance, sentence))