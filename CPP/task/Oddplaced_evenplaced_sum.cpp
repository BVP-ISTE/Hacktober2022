// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
	int rev = 0;
	while (n != 0) {
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}
	return rev;
}

void getSum(int n)
{
	n = reverse(n);
	int sumOdd = 0, sumEven = 0, c = 1;

	while (n != 0) {
		if (c % 2 == 0)
			sumEven += n % 10;
		else
			sumOdd += n % 10;
		n /= 10;
		c++;
	}

	cout << "Sum odd = " << sumOdd << "\n";
	cout << "Sum even = " << sumEven;
}

int main()
{
	int n ;
    cout<<"ENTER THE NUMBER";
    cin>>n;
	getSum(n);

	return 0;
}
