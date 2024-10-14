#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);  // Take the array length
    int A[N];

    for(int i = 0; i < N ; i++){
        scanf("%d",&A[i]);
        if(A[i]<0){
            A[i]=2;
        }else if(A[i]==0){
            A[i]=0;
           
        }else{
            A[i]=1;
        }
    }
     for(int j=0 ; j<N; j++){
        printf("%d ",A[j]);
     }
    return 0;
}