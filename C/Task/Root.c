//Write a program in C to calculate the root of a quadratic equation.

//Input format:
//Contains integers a,b,c of the equation ax^2+bx+c=0

//Output format:
//Prints equal, real and different or imaginary and the roots.

//Sample:
//Input:1, 5, 7
//Output: Imaginary

#include <stdio.h>
int main() {
    double a, b, c, d;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d=b*b-4*a*c;
    if(d==0.0)
        printf("equal");
    else if(d>0.0)
        printf("real and different");
    else
        printf("Imaginary");

    return 0;
} 
