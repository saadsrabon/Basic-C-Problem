#include<stdio.h>

int main ()
{
    int N;
    scanf("%d", &N);
    int A[N+5];
    int freq[100005]={0};
    for (int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
        freq[A[i]]++;
    }

    int onceNumberCount = 0;
    for (int i=0; i<N; i++)
    {
        if (freq[A[i]] == 1)
        {
            onceNumberCount++;
        }
    }


    printf("%d\n", onceNumberCount);


     
     
}