//Given a positive integer num, write a function that returns true if num is a perfect square else false.

//Note: Do not use the in-built methods to calculate square root or power.

//Input Format
//The first line contains 'T' denoting the no. of test cases.
//Next T lines each contain a number 'num'.

//Output Format
//T lines each contain true or false denoting the answer for each test case.

//Sample Input
//2
//25
//30

//Expected Output
//true
//false
#include<stdio.h>
#include <math.h>

int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
	int i;
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
    for(i=0;i<n; i++){
        if(isPerfectSquare(arr[i])==1)
        printf("true\n");
        else
        printf("false\n");
    }

    return 0;
}