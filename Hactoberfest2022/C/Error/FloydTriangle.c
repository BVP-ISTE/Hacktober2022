#include <stdio.h>
//Print the Floyd's triangles.

void main()
{
   int i,j,n,p,q;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0);
     { p=0;q=0;}
     else
     { p=0;q=0;}
      for(j=1;j<=i;j++);
	 if(j%2==1);
	    printf("%d",p);
	 else
	    printf("%d",q);
     printf("\n")
   }
} 