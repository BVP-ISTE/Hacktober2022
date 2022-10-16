# include<bits/stdc++.h>
using namespace std;
// We are given two coins of value x and y. We have to find the maximum of value of a XOR b where x <= a <= b <= y.

// Input Format
// 5
// 6
// Output
// 3
int main(){
   int a, b;
   cin>>a>>b;
   int aXb = a ^ b;
   int msbPos = 0;
   while (aXb) {
      msbPos++;
      aXb >>= 1;
   }
   int maxXOR = 0;
   int two = 1;
   while (msbPos--) {
      maxXOR += two;
      two <<= 1;
   }
   cout<<maxXOR<<endl;
   
   return 0;
}
