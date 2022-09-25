#include<bits/stdc++.h>
using namespace std;
 
void reversearr(int b[], int a[], int N)
{
	int k=0;
   	for(int j=N-1;j>0;j--){
   		b[j]=a[k];
		k++;
   }
}
 
void printarr(int b[] , int n){
for (int i = 0; i <= n; i++)
{
cout<<b[i]<<" ";
}
 
}
//...Error in above segment
int main()
{
int n = 4;
int a[n],b[n];
for (int i = 0; i < n; i++)
{
cin>>a[i];
}

reversearr(b,a,n);
printarr(b , n);
 
return 0;
}