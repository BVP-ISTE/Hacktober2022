// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

// Given an integer n, return the nth ugly number.

// Input: n = 10
// Output: 12
// Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.

// C++ program to find nth ugly number
#include <iostream>
using namespace std;

int maxDivide(int a, int b)
{
	while (a % b == 0)
		a = a / b;
		
	return a;
}

int isUgly(int no)
{
	no = maxDivide(no, 2);
	no = maxDivide(no, 3);
	no = maxDivide(no, 5);

	return (no == 1) ? 1 : 0;
}


int getNthUglyNo(int n)
{
	int i = 1;
	int count = 1;
	while (n > count)
	{
		i++;
		if (isUgly(i))
			count++;
	}
	return i;
}

int main()
{
	unsigned no = getNthUglyNo(150);
	cout << no;
	return 0;
}

