#include<stdio.h>
int main ()
{
   int T;
   scanf("%d",&T); //Taking input how many test case will be
   for(int cs=0; cs<T; cs++)
   {
    int X,Y;
    scanf("%d %d",&X,&Y); //Taking X Y as input
    
    if(X>Y)
    { // checking if X less than y to swap them
        int temp=X;
        X=Y;
        Y=temp;
    }
    int sum =0;
    for(int i=X+1; i<Y; i++)
    {
        
        if(i%2 !=0)
        {
            sum +=i;
        }
    }
  
  printf("%d\n",sum);
   }
}