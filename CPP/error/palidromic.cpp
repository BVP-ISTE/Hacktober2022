#include<iostream>
using namespace std;
int main(){
    //we have to print this pattern:
//    1
//   212
//  32123
// 4321234
    int n;
cout<<"enter number: ";
cin>>n;
for (int i = 1; i <= n; i++)
{
   int j;
   for (j = 1; j <= n-i; j++)
   {
      cout<<" ";
   }
   int k = j;
   for (; j <= n; j++)
   {
      cout<<k--;
   }
   k = 2;
   for (; j <= n+i-1 ; j++)
   {
     cout<<k++;
   }
   cout<<endl;
}
 
}