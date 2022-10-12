#include<iostream>
using namespace std;
// Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.
// input :- 5
//     *****
//    *   *
//   *   *
//  *   *
// *****


int main()
{
    int i, j;
	int rows;
	int n;
	cin>>n;
    for (i=1; i<=n; i++) //Error1:- loop should run till n not less than n
    {
        // Print trailing spaces
        for (j=1; j<=n - i; j++)
            cout << " ";
             
        // Print stars after spaces
        // Print stars for each solid rows
        if (i==1 || i==n) //Here || should be there instead of and
            for (j=1; j<=n; j++)
                cout << "*";
                 
        // stars for hollow rows
        else
            for (j=1; j<=n; j++)
                if (j==1 || j==n)
                    cout << "*";
                else
                    cout << " ";
        // Move to the next line/row
        cout << endl;
    }
	return 0;
}
