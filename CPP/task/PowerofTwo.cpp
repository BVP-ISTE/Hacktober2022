//Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

 #include <iostream>
 #include <cmath>
 using namespace std;

 checkPowerof2 (int n) {

    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
 }

 int main () {

    int n;
    cin >> n;

    (checkPowerof2(n) == 1) ? cout << "true" : cout << "false";

    return 0;
 }

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false