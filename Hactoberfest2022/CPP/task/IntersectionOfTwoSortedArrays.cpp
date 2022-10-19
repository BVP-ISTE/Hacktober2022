//You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these
// arrays are sorted in non-decreasing order. You have to find the intersection of
// these two arrays.
// Intersection of two arrays is an array that consists of all the common elements
// occurring in both arrays.

//Note:
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return an empty array.

// Input Format:
// The first line of the input contains an integer 'T', denoting the number of test cases.
// The first line of each test case contains two integers 'N' 'M', denoting the size of the two arrays.
// The second line of each test case contains 'N' space-separated integers denoting the elements of the first array.
// The third line of each test case contains 'M' space-separated integers denoting the elements of the second array.

//Output Format:
// The only line of output of each test case contains 'K' space-separated integers which correspond to the intersection of the two arrays A and B.
// The output of each test case will be printed on a separate line.

/*
    Time Complexity: O(N+M)
    Space Complexity: O(N)

    Where 'N' is the size of the first array and 
    'M' is the size of the second array.
*/

#include <unordered_map>

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Declare an array to store answer.
    vector<int> ans;

    unordered_map<int, int> mp;

    // Hashing the elements of the first array
    for (int i = 0; i < n; i++)
    {
        mp[arr1[i]]++;
    }

    for (int j = 0; j < m; j++)
    {
        // Checking if the elements are present in the second array or not.
        if (mp.count(arr2[j]) != 0)
        {
            ans.push_back(arr2[j]);
            mp[arr2[j]]--;

            // Deleting the element if it's frequency is 0.
            if (mp[arr2[j]] == 0)
            {
                mp.erase(arr2[j]);
            }
        }
    }

    return ans;
}
