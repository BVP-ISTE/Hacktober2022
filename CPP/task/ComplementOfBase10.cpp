//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

// For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
// Given an integer n, return its complement.

 

// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

// Example 2:
// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.

#include <bits/stdc++.h>
using namespace std;

// Function 
int findComplement(int num)
{
	int ans = 0;
	for (int i = 0; num > 0; i++) {
		ans += pow(2, i) * (!(num % 2));
		num /= 2;
	}
	return ans;
}

// Driver code
int main()
{
	int N ;
    cin>>N;
	cout << findComplement(N);
	return 0;
}
