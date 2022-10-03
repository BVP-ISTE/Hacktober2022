#!/usr/bin/env python
# coding: utf-8

# In[ ]:


#reversing series pattern
#complete the code
n=int(input())
i=1
val=1
while i<=n:
    if i%2!=0:
        j=1
        while j<=i:
            print(val,end=' ')
            j=j+1
            val=val+1
    else:
        value=val+i-1
        j=1
        while j<=i:
            #complete the while loop for reversing series pattern

            
    print()
    i=i+1

