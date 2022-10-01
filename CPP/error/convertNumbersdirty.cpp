#include<bits/stdc++.h>
using namespace std;

int main()
{

int b[20],d,r,i=0,n,o,h;
char hex[20];
cout<<"Enter Decimal number : ";
cin>>d;

n=d;
o=d;
h=d;

//for binary
do
{
r=d%2;
b[i]=r;
i++;
d=d/2;
}
while(d>0);

cout<<"The binary of "<<n<<" is : ";

do
{
cout<<b[i-1];
i--;
}
while(i>0);


//for octal
i=0;
do
{
r=o%8;
b[i]=r;
i++;
o=o/8;
}
while(o>0);

cout<<"\nThe octal of "<<n<<" is :" ;
do
{
cout<<b[i-1];
i--;
}
while(i>0);


//for hexa
i=0;
do
{
r=h%16;
if(r==10) hex[i]='A';
else if(r==11) hex[i]='B';
else if(r==12) hex[i]='C';
else if(r==13) hex[i]='D';
else if(r==14) hex[i]='E';
else if(r==15) hex[i]='F';
else 
{
    string str = to_string(r);
    char c=str[0];
    hex[i]=c;
    
}
i++;
h=h/16;
}
while(h>0);
cout<<"\nThe hexa of "<<n<<" is : ";

do
{
cout<<hex[i-1];
i--;
}
while(i>0);

return 0;
}