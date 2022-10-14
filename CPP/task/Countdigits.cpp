
#include <bits/stdc++.h>
using namespace std;

int frequencyDigits(int n, int d)
{
	int c = 0;
	while (n > 0) {
		
		if (n % 10 == d)
			c++;
		n = n / 10;
	}
	return c;
}

int main()
{
	
	int N;
    cout<<"Input the digits";
    cin>>N;
    cout<<"Enter the number find the count:";
	int D;
    cin>>D;
	cout<<"\n Count of "<<D<<" in "<<N<<" is ";
	cout<<frequencyDigits(N,D);

	return 0;
}
