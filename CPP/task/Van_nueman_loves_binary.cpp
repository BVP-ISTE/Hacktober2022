// Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
//Si:-
/*
4
101
1111
00110
111111*/

// So:-
/*
5
15
6
63*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,f=0,c=0,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        f=0;
        c=0;
        while(n!=0){
            f=f+((n%10)*pow(2,c));
            c++;
            n=n/10;
        }
        cout<<f<<endl;
    }
	return 0;
}
