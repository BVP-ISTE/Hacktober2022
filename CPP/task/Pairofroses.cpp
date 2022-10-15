// Deepak has a limited amount of money that he can spend on his girlfriend. So he decides to buy two roses for her. Since roses are of varying sizes, their prices are different. Deepak wishes to completely spend that fixed amount of money on buying roses for her.
// As he wishes to spend all the money, he should choose a pair of roses whose prices when summed up are equal to the money that he has.
// Help Deepak choose such a pair of roses for his girlfriend.

// NOTE: If there are multiple solutions print the solution that minimizes the difference between the prices i and j. After each test case, you must print a blank line.
// Sample Input
// 2
// 2
// 40 40
// 80

// 5
// 10 2 6 8 4
// 10

// Sample Output
// Deepak should buy roses whose prices are 40 and 40.
// Deepak should buy roses whose prices are 4 and 6.
//solution
#include <iostream>
#include <climits>
using namespace std;

void sort(long long int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[i])
            {
                swap(a[j], a[i]);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int N;
        cin >> N;
        long long int price[N];
        for (int i = 0; i < N; i++)
        {
            cin >> price[i];
        }

        int balance;
        cin >> balance;

        sort(price, N);
        int i = 0, j = N - 1;
        int mini = 0, minj = 0;
         long long diff=1000000000;
        while (i < j)
        {
            if (price[i] + price[j] == balance)
            {
                if (diff >= price[j] - price[i])
                {
                    mini = i;
                    minj = j;
                    diff = price[j] - price[i];
                }
                i++;
                j--;
            }
            else if (price[i] + price[j] < balance){
                i++;
            }
            else{
                j--;
            }
        }
        cout << "Deepak should buy roses whose prices are "<< price[mini] << " and " << price[minj] <<"."<< endl;
        t--;
    }
    return 0;
}
