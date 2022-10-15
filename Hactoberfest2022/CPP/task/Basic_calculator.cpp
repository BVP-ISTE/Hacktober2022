// Write a program that works as a simple calculator.

#include <iostream>
using namespace std;

void Calculator(char ch, int N1, int N2)
{

        switch (ch)
        {
        case '+':
            cout << N1 + N2 << endl;
            break;

        case '-':
            cout << N1 - N2 << endl;
            break;

        case '*':
            cout << N1 * N2 << endl;
            break;

        case '/':
            cout << N1 / N2 << endl;
            break;

        case '%':
            cout << N1 % N2 << endl;
            break;

        default:
            cout << "Invalid operation. Try again." << endl;
            break;
        }
    }

int main()
{

    char ch;
    int N1, N2;

    int t = 10;
    while (t--) {
    std::cin >> ch;

    if (ch == 'x' || ch == 'X')
    {

        return 0;
    }

    std::cin >> N1 >> N2;

    Calculator(ch, N1, N2);
    }
    return 0;
}

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