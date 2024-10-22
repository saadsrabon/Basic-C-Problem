#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
  
    int A[N+5];
   
    int frequency_count =0;
    for(int input =0; input<N; input++){
        scanf("%d",&A[input]);
    };
    int min_num =A[0];
    for(int i=0; i<N; i++){
        if(A[i]<=min_num){
            min_num=A[i];
        }
    }
     
    // printf(" min number %d",min_num);
     for(int k=0; k<N; k++){
        if(A[k]==min_num){
            frequency_count++;
        }
     }
    // printf(" frequency count %d",frequency_count);
     
     if(frequency_count%2 ==0){
        printf("Unlucky");
     }else{
        printf("Lucky");
     }
    // // Sobcheye choto number ta
    //  kto bar ase seita check korte hbe ,
    //   oitar frequency jdi odd number hy tahole array ta lucy
    return 0;
}