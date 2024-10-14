#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for( int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
     
     for(int j =N-1; j>=1; j--){
          for (int l=1 ; l<=N-j; l++ ){
            printf(" ");
          }
           for(int k=1; k<=j; k++){
            
            printf("%d",k);
           }
           printf("\n");

     }
    return 0;
}