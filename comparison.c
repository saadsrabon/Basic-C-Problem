#include <stdio.h>

int main()
{
    // Take two inputs and s have to take as input
    int A, B;
    char S;
    scanf("%d %c %d", &A, &S, &B);

    if (S == '<')
    {
        if (A < B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (S == '>')
    {
        if (A > B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (S == '=')
    {
        if (A == B)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
}