// write a recursive function of tower of hanoi
#include <iostream>
#include <stdio.h>

using namespace std;

void tower_of_hanoi(int, char, char, char);

int main()
{
    int n;

    printf("Enter the number of discs : ");
    scanf("%d", &n);
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}
void tower_of_hanoi(int n, char from_rod, char aux_rod, char to_rod)
{
    if (n == 1)
    {
        printf("Move Disc 1 From %c to %c \n", from_rod, to_rod);
        return;
    }

    tower_of_hanoi(n - 1, from_rod, to_rod, aux_rod);
    printf("Move Disc %d From %c to %c \n", n, from_rod, to_rod);
    tower_of_hanoi(n - 1, aux_rod, from_rod, to_rod);
}
