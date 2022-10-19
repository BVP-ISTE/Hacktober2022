// Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,f=0,c=0;
	cin>>n;
	while(n!=0){
		f=f+((n%8)*pow(10,c));
		c++;
		n=n/8;
	}
	cout<<f;
	return 0;
}
