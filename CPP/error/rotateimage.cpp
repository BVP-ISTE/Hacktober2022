#include <iostream>
using namespace std;
//to rotate the 2-d array
//for eg.input 1 2 3
             //4 5 6
             //7 8 9 
    // //output.       3 6 9 
    //                 2 5 8 
    //                 1 4 7 



void reversecolumns(int a[][100], int n)
{
    for (int col = 0; col < n; col++)
    {
        int x = 0, y = n/2;
        while (y>x)
        {
            swap(a[x][col], a[n-x-1][col]);
            x++;
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
                swap(a[i][j], a[j][i]);
            }
        }
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
   transpose(a, n);
   reversecolumns(a, n);
   
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
