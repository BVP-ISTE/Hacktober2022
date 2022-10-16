// Given an array find the number which comes with maximum frequency. It must work in O(n) time complexity.
// TIP:- try to use hashmap for better time complexity
// input an array and in the output print the max occurred freq number

#include <iostream>

using namespace std;

int findMostFrequentElement(int A[], int n)
{
    Create a HashTable H
    int max_freq = 1
    int ans = -1
    for (i = 1 to n-1)
    {
        if (A[i] in H)
        {
            H[A[i]] = H[A[i]] + 1
            if (max_freq < H[A[i]])
            {
                max_freq = H[A[i]]
                ans = A[i]
            }
            else if (max_freq == H[A[i]])
                ans = min(ans, A[i])
        }
        else
            H[A[i]] = 1
    }
    return ans
}

int main () {

    // int n;
    // cout << "Enter array size: ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    int arr[] = {40, 50, 30, 40, 50, 30, 30};
    int n = 7;

    int frequency = maximumFrequency(arr, n);

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == frequency) {
            count++;
        }
    }

    cout << maximumFrequency;

    return 0;
}