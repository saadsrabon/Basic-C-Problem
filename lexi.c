// You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers.

// Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.

// Input Format

// The first line will contain 3 strings, S1, S2, S3 containing only lowercase letters.


#include<stdio.h>
#include<string.h>

int main(){
    char S1[1000],S2[1000],S3[1000];
    scanf("%s %s %s",S1,S2,S3);
    if(strcmp(S1,S2)<0 && strcmp(S1,S3)<0){
        printf("%s\n",S1);
    }
    else if(strcmp(S2,S1)<0 && strcmp(S2,S3)<0){
        printf("%s\n",S2);
    }
    else{
        printf("%s\n",S3);
    }
    if(strcmp(S1,S2)>0 && strcmp(S1,S3)>0){
        printf("%s",S1);
    }
    else if(strcmp(S2,S1)>0 && strcmp(S2,S3)>0){
        printf("%s",S2);
    }
    else{
        printf("%s",S3);
    }
}