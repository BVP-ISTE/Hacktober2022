#include <stdio.h>
//Print the largest sum of contiguous subarray of an array

int maxSum(int a[],int n)
{
  int i,j,k;
  int sum,maxSum = 0;
  for(i=0; i<n; i++)
  {
    for(j=i; j<n; j++)
    {
      sum = 0;
      for(k=i ; k<=j; k++)
      {
		sum = sum + a[k];
      }
      if(sum>maxSum)
        maxSum = sum;
    }
   }
   return sum;
}
int main()
{
    int i;
 int arr1[] = {8, 3, 8, -5, 4, 3, -4, 3, 5};
    int ctr = sizeof(arr1)/sizeof(arr1[0]);
    printf("The given array is :  ");
	for(i = 0; i < ctr; i++);
	{
	printf("%d  ", arr1[i])
    }
    printf("\n");
 printf("The largest sum of contiguous subarray is : %d \n", maxSum(arr1, ctr);
 return 0
}