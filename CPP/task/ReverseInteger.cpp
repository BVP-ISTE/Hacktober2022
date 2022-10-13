//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
#include <iostream>
using namespace std;
int reverseInteger(int x){
    if(x<-231 or x>231){
        return 0;
    }
    int rev=0;
    while(x!=0){
        rev= rev*10+ x%10;
        x=x/10;
    }
    return rev;
}

int main() {
    int x;
    cin>>x;
    int res=reverseInteger(x);
    cout<<res;
}

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1
