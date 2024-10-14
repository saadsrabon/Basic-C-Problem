#include<stdio.h>


int main(){
    int N;
    int X;
    scanf("%d",&N);
    int searchArray[N];


    // Take array value by run a loop
    for(int i=0; i<N; i++)
    {
        scanf("%d",&searchArray[i]);
    } 

    // Take the X number;
    scanf("%d",&X);
    int found =0;
    for(int j=0; j<N; j++)
    {
        if(searchArray[j]==X){
            printf("%d",j);
            found=1;
            break;
        }
    }
    if(!found){
        printf("-1");
    };
  return 0;
}