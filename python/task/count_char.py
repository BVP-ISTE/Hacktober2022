#!/usr/bin/env python
# coding: utf-8

# In[ ]:


# Count occurrence of a character in a Python string

### ----- Uncomment below 2 lines if you want to use static sentences. 
sentence = 'The Udacity Udacity'
ch = 'u'

### ----- Uncomment below 2 lines if you like to use custome sentences and characters. s
# sentence = input("Enter a valid sentence : ")
# ch = input("Enter a character to search occurance of in the above sentence : ")

ch_occurance = sentence.lower().count(ch)
print("The world '%s' appears %s times in the sentence %s" %(ch, ch_occurance, sentence))