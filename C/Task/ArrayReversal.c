//Given an array of size n, reverse it.

//Input format:
//The first line contains an integer, denoting the size of the array. The next line contains n space-separated integers denoting the elements of the array.

//Output format:
//Print the reversed array.

//Sample:
//Input:
//6
// 16 13 7 2 1 12

//Output:
//12 1 2 7 13 16

#include <stdio.h>
#include <stdlib.h>
#define n 6
int main(){
    int arr[n] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}

![12345](https://user-images.githubusercontent.com/73175318/198240130-363252fb-77a8-4f82-b5ec-23cc613ba3a9.PNG)


