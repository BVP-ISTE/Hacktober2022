#include <iostream>
#include <cstring>
using namespace std;

bool ispallindrome(string &a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != a[a.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a;
    getline(cin, a);
    if (ispallindrome(a) == true)
    {
        cout << "Pallindrome" << endl;
    }
    else
    {
        cout << "Not pallindrome" << endl;
    }

    return 0;
}