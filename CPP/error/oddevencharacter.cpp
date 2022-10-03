#include<iostream>
#include<cstring>
// Take as input S, a string. Write a function that replaces every even character with the character having just higher ASCII code and every odd character with the character having just lower ASCII code. Print the value returned.
// Si:- abcg
// So:- badf
using namespace std;

int main() {
	char a[1000];
	cin.getline(a,1000);
	int len=strlen[a];
	char x;
	for(int i=0;i<len;i++){
		if(i%2==0){
			x+=a[i];
			cout<<x;
		}
		else{
			x=a[i]-1;
			cout<<x;
		}
	}
	
	return 0;
}