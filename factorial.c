#include <stdio.h>
long long factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
int main()
{

    int cs;
    scanf("%d", &cs);
    for (int i = 0; i < cs; i++)
    {
        int N;
        scanf("%d", &N);

        printf("%lld\n", factorial(N));
    }

    return 0;
}