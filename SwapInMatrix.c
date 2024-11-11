#include<stdio.h>

int main()
{
    int N , M;
    scanf("%d %d", &N , & M);

    // Take array input
    int arr[N+5][M+5];
    
    for(int i = 0; i < N; i++)
    {
       for(int j = 0; j < M; j++)
       {
           scanf("%d", &arr[i][j]);
       }
    }

    
    for(int i = 0; i < N; i++)
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][M-1];
        arr[i][M-1] = temp;
    }

    
    for (int i = 0; i < M; i++)
    {
        int temp = arr[0][i];
        arr[0][i] = arr[N-1][i];
        arr[N-1][i] = temp;
    }

   
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
