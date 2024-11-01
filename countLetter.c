#include<stdio.h>
#include<string.h>


int main ()
{
  char S[10000001];
  scanf("%s", &S);


//   i need to count the frequency of each letter in the string

    int freq[26]={0};
    
    
    for(int i=0; S[i]!='\0'; i++)
    {
        freq[S[i] - 'a'] += 1;
    }
    
    for(int i=0; i<26; i++)
    {
        if(freq[i] > 0){

        printf("%c : %d\n", i+'a', freq[i]);

        }
    }
}