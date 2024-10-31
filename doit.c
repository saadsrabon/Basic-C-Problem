// You will be given two positive integer N and K. You need to print from 1 to K, and you need to do this N times.
#include<stdio.h>
int main (){
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i =0 ; i<N; i++){
        for(int j=1; j<=K; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}