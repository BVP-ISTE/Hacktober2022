// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.
// C++ program to find the frequency
// of a digit in a number
#include <bits/stdc++.h>
using namespace std;

// function to find frequency of digit
// in a number
int frequencyDigits(int n, int d)
{
	// Counter variable to store
	// the frequency
	int c = 0;
	
	// iterate till number reduces to zero
	while (n > 0) {
		
		// check for equality
		if (n % 10 == d)
			c++;
		// reduce the number
		n = n / 10;
	}
	
	return c;
}

// Driver Code
int main()
{
	
	int N;
    cout<<"Input the digits";
    cin>>N;
    cout<<"Enter the number find the count";
	int D;
    cin>>D;
	
	cout<<frequencyDigits(N,D);

	return 0;
}
