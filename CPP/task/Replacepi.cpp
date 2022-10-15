// Replace all occurrences of pi with 3.14

// inp:-
// 3
// xpix
// xabpixx3.15x
// xpipippixx

// out:-
// x3.14x
// xab3.14xx3.15x
// x3.143.14p3.14xx

#include<iostream>
using namespace std;

void replacePi(string s)
{
    if(s.length() == 0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

int main()
{
    string s1 = "xpix";
    string s2 = "xabpixx3.15x";
    string s3 = "xpipippixx";
    replacePi(s1);
    cout<<endl;
    replacePi(s2);
    cout<<endl;
    replacePi(s3);
    cout<<endl;
    return 0;
}

