#include <bits/stdc++.h>
using namespace std;
//funct to print the target using pairs
//find the error
void printpairs(int a[], int i , int j)
{
    int sum;
    cin >> sum;
    
    while (j > i)
    {
      int target = a[i]+a[j];
        if (target == sum)
        {
            cout<<min(a[i],a[j])<<" and "<<max(a[i],a[j])<<endl;
            i++;
            j--;
        }
        else if(target > sum){
            j--;
        }
        else if(target < sum){
            i++;
        }
        
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a , a+n);
    printpairs(a , 0 , n-1);
    return 0;
}
