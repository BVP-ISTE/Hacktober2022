#include <iostream>
using namespace std;

void bubblesortrec(int *a, int n, int i)
{

    // base case
    if (i == n - 1)
    {
        return;
    }

    // recursive case
    for (int j = 0; j < n  - i; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }

    bubblesortrec(a, n, i + 1);
}

void printrec(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {6, 3, 2, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printrec(a, n);

    cout<<endl; 
    
    bubblesortrec(a, n, 0);

    printrec(a, n);

    return 0;
}