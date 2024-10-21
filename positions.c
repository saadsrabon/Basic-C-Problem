// Given a number N and an array A of N numbers. Print all array positions that
//  store a number less than
//   or equal to 10 and the number
//    stored in that position.

#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
     if (N <= 0) {
        printf("Invalid size of array.\n");
        return 1; // exit the program if N is invalid
    }
    int A[N];
    for(int an=0; an<N; an++){
        scanf("%d",&A[an]);
    }

    for(int cn=0; cn<N; cn++){
        if(A[cn]<=10){
            printf("A[%d] = %d\n" , cn ,A[cn]);
        }
    }
    return 0;
}