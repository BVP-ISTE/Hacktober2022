// Write a program that works as a simple calculator.

// 1.It reads a character (ch)
// 2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number.
// 3.If ch is 'X' or 'x', the program terminates.
// 4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).

// SI:-
// * 
// 1 
// 2 
// / 
// 4 
// 2 
// + 
// 3 
// 2 
// ; 
// X

// SO:-
// 2 
// 2 
// 5 
// Invalid operation. Try again.

#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    int N1,N2;
    cin>>N1>>N2;
    cout<<"Num 1 is:"<<" "<<N1<<endl;
    cout<<"Num 2 is:"<<" "<<N2<<endl;


    switch (ch)
    {
    case '+':
    cout<<N1 + N2;
        break;

    case '-':
    cout<<N1 - N2;
        break;

    case '*':
    cout<<N1 *  N2;
        break;

    case '/':
    cout<<N1 / N2;
        break;
    
    default:
    cout<<"Invalid Operation";
        break;
    }


return 0;
}