#include <iostream>
using namespace std;

void patternrec(int n, int i)
{
    // base case
    if (i == n)
    {
        return 0;
    }

    // recursice case
    for (int j = 0; j < i; j++)
    {
        cout << "*"
             << " ";
    }
    cout << endl;

    patternrec(n, i);
}

int main()
{
    int n;
    cin >> n;

    patternrec(n, 0);
    return 0;
}