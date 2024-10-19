#include<stdio.h>
int main()
{
    long long a ,b ,k;
    scanf("%I64d %I64d %I64d", &a, &b, &k);

    if(a%k==0 && b%k==0)
    {
        printf("Both");
    }
    else if(a%k==0)
    {
        printf("Memo");
    }
    else if( b%k==0){
        printf("Momo");
    }
    else{
        printf("No One");
    }

}