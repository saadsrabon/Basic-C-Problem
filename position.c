#include<stdio.h>
int main(){
    // I need to define an length of an array
    int N;
    scanf("%d",&N);
    int A[N]; //Define an Array 
    for(int i = 0; i<N; i++){
        scanf("%d",&A[i]);
    }
    for(int j =0; j<N; j++){
        if(A[j]<=10){
            printf("A[%d] = %d\n",j ,A[j]);
        }
    }

}