#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int num1= a/10;
    int num2 =a%10;

    if(num1%num2==0 || num2%num1==0){
        printf("YES");
    }else{
        printf("NO");
    }
}