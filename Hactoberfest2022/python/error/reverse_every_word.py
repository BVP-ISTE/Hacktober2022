#!/usr/bin/env python
# coding: utf-8

# In[ ]:


#reverse each word
#find the error and correct it
st=input()

l=[] # only error in the code, dict instead of list

p=""
for i in range(len(st)):
    if st[i]==' ':
        l.append(p)
        p=""
    else:
        p+=st[i]
    
l.append(p)
        
for i in l:
    print(i[::-1],end=" ")

