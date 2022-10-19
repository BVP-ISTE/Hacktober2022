// You are given an input array whose each element represents the height of a line towers. 
// The width of every tower is 1.
//  It starts raining. Water is filled between the gap of towers if possible. You need to find how much water filled between these given towers.
// Sample Input:- 2
//                6
//                3  0  0  2  0  4
//                12
//                0  1  0  2  1  0  1  3  2  1  2  1
// Out->10
//      6

#include<iostream>
using namespace std;

int trap(int arr[], int n)
{
    int left = 0, right = n-1, water = 0;
    int maxLeft = arr[left];
    int maxRight = arr[right];
    while(left < right)
    {
        if(arr[left] < arr[right])
        {
            left++;
            maxLeft = max(maxLeft, arr[left]);
            water += maxLeft - arr[left];
        }
        else
        {
            right--;
            maxRight = max(maxRight, arr[right]);
            water += maxRight - arr[right];
        }
    }
    return water;
}

int main()
{
    int arr1[] = {3,0,0,2,0,4};
    cout<<trap(arr1,6)<<endl;
    int arr2[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(arr2,12)<<endl;
}