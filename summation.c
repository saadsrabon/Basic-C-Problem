// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

// EX : |-5| = 5 , |7| = 7

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (-109  ≤  Ai  ≤  109).

// Output
// Print the absolute summation of these numbers.

#include<stdio.h>
#include<stdlib.h>
int main(){
int N;
long long sum=0;
scanf("%d",&N);

int numberArray[N];
for(int i=0; i<N; i++){
    scanf("%d",&numberArray[i]);
}
//calculation
for(int j=0; j<N; j++){
    sum+=numberArray[j];
} 
 printf("%lld",llabs(sum));

    return 0;
}