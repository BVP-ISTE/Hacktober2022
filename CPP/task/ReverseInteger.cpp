//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

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

# include <iostream>
using namespace std;
int reverse_int(int n)
{
    int rev=0;
    while(n>0)
    {
        int digit=n%10;
        rev*=10;
        rev+=digit;
        n/=10;
    }
    return rev;
}
int main()
{
    int a;
    cin>>a;
    int b=reverse_int(a);
    cout<<b;
