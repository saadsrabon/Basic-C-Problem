#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A <= B && A <= C)
    {
        // A smallest
        if (B <= C)
        {
            printf("%d\n%d\n%d\n", A, B, C);
        }
        else
        {
            printf("%d\n%d\n%d\n", A, C, B);
        }
    }
    else if (B <= A && B <= C)
    // B is smallest
    {
        if (A <= C)
        {
            printf("%d\n%d\n%d\n", B, A, C);
        }
        else
        {
            printf("%d\n%d\n%d\n", B, C, A);
        }
    }
    else
    {
        if (B <= A)
        {
            printf("%d\n%d\n%d\n", C, B, A);
        }
        else
        {
            printf("%d\n%d\n%d\n", C, A, B);
        }
    }

    printf("\n%d\n%d\n%d\n", A, B, C);
}

// Learnings check the all possible result