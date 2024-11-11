#include<stdio.h>
#include <stdlib.h>

int main () 
{
    int N;
    scanf("%d", &N);
    int *array = (int*)malloc(sizeof(int)); 

    // i need to increase array length  each time When taking an input and store the input in the array
    for (int i=0; i<N; i++)
    {
        int x;
        scanf("%d", &x);
        array = (int*)realloc(array, (i+1)*sizeof(int));
        array[i] = x;
    }
 
    for (int i=0; i<N; i++)
    {
        printf("%d ", array[i]);
        if(i<N-1)
        {
            printf("");
        };

        
    };

    printf("\n");

        free(array);
}