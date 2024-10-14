#include <stdio.h>

int main()
{
    // take the input and check the ascii value of it.
    // char a;
    // int b;
    // scanf("%c", &a);
    // b = a;
    // char character_print = b + 1;
    // if (b == 122)
    // {
    //     printf("a");
    // }
    // else
    // {
    //    printf("%c",character_print);
    // };

    // then increase ascii value to one and show the item
    // ******* Problem 2*******
    // int a;
    // int b;
    // int c;
    // int d;

    // scanf("%d %d %d %d",&a ,&b ,&c ,&d);

    // if((a*b)+c ==d)
    // {
    //     printf("YES");
    // }
    // else if((b*c)+a==d)
    // {
    //     printf("YES");
    // }else if((c*a)+b==d)
    // {
    //     printf("YES");
    // }else if((a*b)-c==d)
    // {
    //     printf("YES");
    // }else if((b*c)-a==d)
    // {
    //     printf("YES");
    // }else if((c*a)-b==d)
    // {
    //     printf("YES");
    // }else if((a+b)-c==d)
    // {
    //     printf("YES");
    // }else if((b+c)-a==d)
    // {
    //     printf("YES");
    // }else if((c+a)-b==d){
    //     printf("YES");
    // }else if((a-b)+c==d)
    // {
    //     printf("YES");
    // }else if((b-c)+a==d)
    // {
    //     printf("YES");
    // }else if((a-c)+b==d){
    //     printf("YES");
    // }

    // else{
    //     printf("NO");
    // }
    // ***** Problem solution three

    // int N;
    // scanf("%d",&N);
    // for(int i=1; i<=N; i++){
    //     if(N%i==0){
    //         printf("%d\n" ,i);
    //     }
    // }

    int a;
    int b;
    int c;
    int d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a + b - c == d)
    {
        printf("YES");
    }
    else if (a + b * c == d)
    {
        printf("YES");
    }
    else if (a - b + c == d)
    {
        printf("YES");
    }
    else if (a - b * c == d)
    {
        printf("YES");
    }
    else if (a * b + c == d)
    {
        printf("YES");
    }
    else if (a * b - c == d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}