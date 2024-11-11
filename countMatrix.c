#include<stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
      int matrix[N][M];
    int X;
    scanf("%d", &X);
    int count[1005]={0};
   for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            count[matrix[i][j]]++; 
        }
    }
       for (int i = 0; i < X; i++) {
        int query;
        scanf("%d", &query);
        printf("%d\n", count[query]);
    }
    
    return 0;
}