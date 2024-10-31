#include<stdio.h>
int A[1000];

int main(){
    int length=5;
 
    for(int i=0; i<length; i++){
        scanf("%d",&A[i]);
    }
    length++;
   
    int index =2;
    int value=5;

    for(int l=length-1; l>=index; l--){
        A[l+1]=A[l];
    }

    A[index]=value;

    for(int k=0; k<length; k++){
        printf("%d",A[k]);
    }

    
}