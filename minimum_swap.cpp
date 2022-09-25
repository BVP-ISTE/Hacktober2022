# include<iostream>
using namespace std;
//function to print the minimum count of swaps to sort an array
int swapndcount(int a[] , int n){
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a(j),a(j+1));
                count++;
            }
            
        }
        
    }

    return count;
    
}



int main(){
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i <= n; i++)
   {
       cin>>a[i];
   }
   
    swapndcount(a , n);
   
    return 0;
}