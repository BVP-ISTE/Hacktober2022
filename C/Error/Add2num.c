#include <stdio.h>
long addTwoNumbers(long *, long *);
 
int main()
{
   long fno, sno, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
  
   printf(" Input the first number : ");
   scanf("%ld", fno);
   printf(" Input the second  number : ");
   scanf("%ld", sno);   
   sum = addTwoNumbers(fno, sno);
   printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
   return 0;
}
long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = n1 + n2;
   return sum
}
