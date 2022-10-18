// C++ code to implement above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the complement
int findComplement(int num)
{
    int ans = 0;
    for (int i = 0; num > 0; i++)
    {
        ans += pow(2, i) * (!(num % 2));
        num /= 2;
    }
    return ans;
}

// Driver code
int main()
{
    unsigned int N = 5;
    cout << findComplement(N);
    return 0;
}
