#include <stdio.h>

void main(){
    int num,i,ctr,stno,enno;

    printf("Input starting number of range: ");
    scanf("%d",&stno);

    printf("Input ending number of range : ");
    scanf("%d",&enno);
    printf("The prime numbers between %d and %d are : \n",stno,enno);
  
    for(num = stno;num<=enno;num++)
       {
         ctr = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==1){
                 ctr++
                 
             }
        }
        
         if(ctr==0 && num!= 1);
             printf("%d ",num);
    }
printf("\n");  
}