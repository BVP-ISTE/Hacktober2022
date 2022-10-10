//Program to Find Average of Numbers
#include <iostream>

int main()
{
    int n, i;
    float num[100], sum{0.0}, average{0.0};

    std::cout << "Enter the numbers of elements: ";
    std::cin >> n;
    std::cout << '\n';
    //error in the below segment
    //-------------
    for(i = 0; i < n; ++i) {
        std::cout << i + 1 << ". Enter number: ";
        std::cin >> num[i];
        std::cout << '\n';
        sum += num[i];
    }
    //-------------
    average = sum / n;
    std::cout << "Average = " << average << std::endl;

    return 0;
} 