#!/usr/bin/env python
# coding: utf-8

# In[ ]:


#code for even fibonacci numbers
#find and correct the error in the code

n=int(input())
firstNumber=1
secondNumber=1
sum=1
evenSum=0
while sum<n:
    if(sum%2==0):
        evenSum=evenSum+sum
    sum=firstNumber*secondNumber
    firstNumber=secondNumber
    secondNumber=sum
    n-=1
    
print(evenSum)

