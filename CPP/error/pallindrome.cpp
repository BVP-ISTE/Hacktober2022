#include <iostream>
#include <cstring>
using namespace std;

bool ispallindrome(char a[])
{
    int i = 0;
    int j = strlen(a) - 1;

    while (i < j)
    {
        if (a[i] != a[j])
        {
            return false;
        }
        j--;
        i++;
    }

    return true;
}

int main()
{
    char a[1000];
    cin >> a;
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