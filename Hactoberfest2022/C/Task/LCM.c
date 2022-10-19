// Write a program in C to find LCM of any two numbers.

// Input format:
// Two integers a and b

// Output format:
// LCM of a and b

// Sample:
// Input:
// 15 20

// Output:
// 60
#include <stdio.h>

int main()
{
    int i, num1, num2, max, lcm = 1;

    printf("Enter any two numbers to find LCM: ");
    scanf("%d%d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    i = max;

    while (1)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {

            lcm = i;

            break;
        }

        i += max;
    }

    printf("LCM of %d and %d = %d", num1, num2, lcm);

    return 0;
}