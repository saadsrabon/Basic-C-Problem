// Babul likes to read books. He has N books and they take different times to finish each. He has arranged all the books in a order of finishing time to read them. So the first book will need the least time to finish and the last book will take the most time. He as T time to read.

// He has given how a list of N number in increasing order. The numbers are the times to finish the books.

// You have to tell him how many books he can finish reading at most in T time.

#include<stdio.h>
int main(){
    int N,T;
    scanf("%d %d",&N,&T);
    int A[N];
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    int sum=0;
    int bookCount=0;
    for(int i=0; i<N; i++){
        sum+=A[i];
        if(sum<=T){
            bookCount++;
        }
        else{
            break;
        }
    }
    printf("%d",bookCount);
}