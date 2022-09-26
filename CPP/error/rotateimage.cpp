#include <iostream>
using namespace std;
//to rotate the 2-d array
//for eg.input 1 2 3
             //4 5 6
             //7 8 9 
    // //output.       3 6 9 
    //                 2 5 8 
    //                 1 4 7 


void reverserows(int a[][100], int n)
{
    for (int row = 0; row < n; row++)
    {
        int x = 0, y = n - 1;
        while (y >= x)
        {
            swap(a[row][x], a[row][y]);
            x--;
            y++;
        }
    }
}

void transpose(int a[][100], int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            { // or i>j
                swap(a[i][j], a[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    reverserows(a, n);
    transpose(a, n);
    return 0;
}