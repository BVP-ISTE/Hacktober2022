#include <iostream>
using namespace std;
/*Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.*/
//Inp -> 4545

//Oup -> 4444


#define int long long
int chewbaccanum(int n)
{
    int no = 0, i = 1;
    while (n != 0)
    {
        int digit = n % 10;
        int newdigit = 9 - digit;
        if (newdigit < digit)
        {
            if (0 < n && n < 10)
            {
                if (digit == 9 && newdigit == 0)
                {
                    no += digit * i;
                }
            }
            no += newdigit * i;
        }
        else
        {
            no += digit * i;
        }
        i *= 10;
        n /= 10;
    }
    return no;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << chewbaccanum(n);
    return 0;
}