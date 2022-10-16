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
//solution
#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;

    for(int i = 1; i<=n; i++)
   {
          int num;
          cin>>num;
          int dvalue = 0;
          int base = 1;

          while (num){
                  int last_digit = num % 10;
                  num = num / 10;
                  dvalue += last_digit * base;
                  base = base * 2;
          }
         cout<<dvalue<<endl;
  }
  return 0;
}
