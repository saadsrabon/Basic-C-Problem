#include<stdio.h>
#include<string.h>
   int freq[100005];
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N+5];
 
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
          freq[A[i]] += 1;
    }

     for(int i=1; i<=M; i++){
        printf("%d\n", freq[i]);
     }
}