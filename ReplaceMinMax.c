#include <stdio.h>
int main()
{
    // Have to take input of Number of array
    int N;
    scanf("%d", &N);
    if (N < 0)
    {
        return;
    }
    int A[N];
    // take input for array
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    };

    // have to pursue value of temp number
    int lowest = 1000;
    int higest = 0;
    // have to pursue value of lowest number position
    int lowest_position = 0;
    int higest_position = 0;

    // check for the minimum num
    for (int k = 0; k < N; k++)
    {
        if (lowest > A[k])
        {
            lowest = A[k];
            lowest_position = k;
        };
    };



    for (int j = 0; j < N; j++)
    {
        if (higest < A[j])
        {
            higest = A[j];
            higest_position = j;

        }
    }

    A[lowest_position] = higest;
    A[higest_position] = lowest;
  
    for (int p = 0; p < N; p++)
    {
        printf("%d ", A[p]);
    }
}