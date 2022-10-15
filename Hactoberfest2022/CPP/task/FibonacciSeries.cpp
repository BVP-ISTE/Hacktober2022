//Fibonacci Series using Recursion
#include <iostream>
using namespace std;
int fibonacciSeries(int n){
   if(n==0 or n==1){
       return n;
   }

   return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}

int main() {
    int x;
    cin>>x;
    int res=fibonacciSeries(x);
    cout<<res;
}
