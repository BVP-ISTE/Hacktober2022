//write a recursive function to print the nth fibonacci number

#include <iostream>
using namespace std;

void fib (int n) {

    int prev = 0;
    int curr = 1;

    int next; 

    for (int i = 2; i < n; i++)  {

        next = curr + prev;
        prev = curr;
        curr = next;

    }
        cout << next << " ";

    return;
}

int main () {

    int n;
    cin >> n;

    fib (n);

    return 0;
}