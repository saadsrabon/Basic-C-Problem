#include<stdio.h>

int main()
{
    int N , M;
    scanf("%d %d", &N , & M);

    // Take array input
    int arr[N+5][M+5];

     if (N != M) {
        printf("NO\n");
        return 0;
    }


    for(int i = 0; i < N; i++)
    {
       for(int j = 0; j < M; j++)
       {
           scanf("%d", &arr[i][j]);
       }
    }

    // check if the primary diagonal and secondary diagonal value is one and other elements are zero
    int flag = 1;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(i == j || i+j == N-1)
            {
                if(arr[i][j] != 1)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if(arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (!flag)
        {
            break;
        }
    }

    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}