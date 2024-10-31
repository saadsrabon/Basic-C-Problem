// Abul is plannig to by a smartphone. He has N smartphones available to buy of different prices. But he wants to buy a smartphone in a range between X and Y.

// He has given you the price list.

// Can you tell him how many smartphones are available in that price range.


#include<stdio.h>
int main(){
    int N,X,Y;
    scanf("%d %d %d",&N,&X,&Y);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    int phonecount=0;
    for(int i=0; i<N; i++){
        if(A[i]>=X && A[i]<=Y){
            phonecount++;
        }
    }
    printf("%d",phonecount);
}