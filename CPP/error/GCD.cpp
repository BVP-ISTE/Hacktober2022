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
    int gcd=min(N1,N2);
    while (gcd > 0) {
        if (N1 % gcd == 0 && N2 % gcd == 0) {
            break;
        }
        gcd--;
    }
    cout << gcd;
    return 0;
}
