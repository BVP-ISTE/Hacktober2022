#include<iostream>
using namespace std;
int main() {
	int i,f=0,s=1,n,c=0;
	cin>>n;
	for(i=0;i<=n;i++){
		if(i==0||i==1){
			continue;
		}
		else{
		c=f+s;
		f=s;
		s=c;
		}
	}
	cout<<c;
	return 0;
}
