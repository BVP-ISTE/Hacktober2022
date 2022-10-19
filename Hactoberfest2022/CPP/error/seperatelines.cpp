// One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.
// Si:- IAmACompetitiveProgrammer
// So:- I
//      Am
//      A
//      Competitive
//      Programmer

#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.length();
    string pr;

    for(int i=0;i<n;i++)
    {
        pr.push_back(s[i]);            //pr.push_back(s(i));
        if(i == n-1)        // if(i==n-1) //last letter
            cout<<pr<<endl;
        else if(s[i+1]>='A' && s[i+1]<='Z') //s[i+1] is a capital letter.
        {
            cout<<pr<<endl;
            pr.clear();
        }
    }
}

 #include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.size();i++){
	if(s[i]>='A' && s[i]<='Z')
	   cout<<"\n";

	   cout<<s[i];
}


}