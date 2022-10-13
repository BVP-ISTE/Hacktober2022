// Given a list of numbers, sort them in non decreasing order.

// Sample:
// Input: 5 5 3 6 7 1
// Output: 1 3 5 6 7
#include <stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}
void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d \n", i + 1);

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
void bubblesortAdaptive(int *A, int n)
{
    int temp;
    int isSorted = 0;

    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d \n", i + 1);
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int A[] = {5, 5, 3, 6, 7, 1};
    int n = 6;
    printarray(A, n);
    bubblesort(A, n);
    printarray(A, n);
    return 0;
}