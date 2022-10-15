// Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

// Binary to Decimal

#include<iostream>
#include<cmath>

int binaryToDecimal (int N) {

    int decimalNum = 0, i = 0, lastDigit;

    while (N > 0) {

        lastDigit = N % 10;
        
        N = N / 10;

        decimalNum = decimalNum + lastDigit * pow (2, i);

        ++i;
    }

    return decimalNum;
}

int main () {

    int N;     //Input Binary Number

    std::cin >> N;

    std::cout << binaryToDecimal (N);

    return 0;
}