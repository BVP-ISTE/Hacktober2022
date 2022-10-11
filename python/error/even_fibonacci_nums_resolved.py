n=int(input())
firstNumber=1
secondNumber=1
sum=1
evenSum=0
while sum<n:
    if(sum%2==0):
        evenSum=evenSum+sum
    sum=firstNumber+secondNumber
    firstNumber=secondNumber
    secondNumber=sum
    n-=1
    
print(evenSum)