#include <iostream>
using namespace std;
/*A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.*/
//Inp -> 16 
//       24
//out -> 8
int main()
{
    int N1, N2;
    cin >> N1;
    cin >> N2;
    int gcd;
    if (N1 > N2)
    {
        for (gcd = N1; gcd > 1; gcd--)
        {
            if (N2 % gcd == 0 && N1 % gcd == 0)
            {
                break;
            }
        }
    }
    else
    {
        for (gcd = N2; gcd > 1; gcd--)
        {
            if (N2 % gcd == 0 && N1 % gcd == 0)
            {
                break;
            }
        }
    }

    cout << gcd;
    return 0;
}
