#!/usr/bin/env python
# coding: utf-8

# In[ ]:


#find the error in the program and correct it

# decimal to binary
import maths
  
num=int(input("Enter a Number : "))
bnum=""
rem=""
while num>=1:
    rem+=str(num%2)
    num=math.floor(number/2)
    
for i in range(len(rem)-1,-1,-1):
    bnum = bnum + rem[i]
     
print("Binary number for given number is {0}".format(bnum))

