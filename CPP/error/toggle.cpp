#include<iostream>
#include<cstring>
using namespace std;
// Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.
// Si:- abC
// So:- ABc

void toggle(char a[]){
	int len = strlen(a);
	char x;
	for(int i=0;i<len;i++){
		if(a[i]>65 and a[i]<90){
			x=32 + a[i];
			cout<<x;
		}
		else{
			x=a[i]-32;
			cout<<x;
		}
	}
}

int main() {
	char a[1000];
	cin.getline(a,1000);
	toggle(a);
	

	return 0;
}