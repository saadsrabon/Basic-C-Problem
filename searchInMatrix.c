#include<stdio.h>
#include<string.h>

int main () 
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N][M];

    int X;
    scanf("%d", &X);

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // I need to search for the number X in the matrix

   int found = 0;
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<M; j++)
        {
            if (A[i][j] == X)
            {
                printf("Will not take number");
                found = 1;
                break;
            }
        }
    }
        if(found == 0)
        {
            printf("Will take number");
        }

    
    return 0;
}

if (matrix[i][j] != 0 && matrix[i][j] != 1) {
                    isOne = 1;
                }


