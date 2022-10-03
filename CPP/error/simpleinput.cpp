#include<iostream>
using namespace std;
// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
// si:-
// 1
// 2
// 88
// -100
// 49

// so:-
// 1
// 2
// 88


int main() {
	int no;
	int sum = 0;
	int k=0;
	while(true){
		cin>>no;
		if(-1000<no<1000){
			sum += no;
			if(sum>=0){
				cout<<no<<endl;
			}
			
		}
	}
	return 0;
}