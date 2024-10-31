#include<stdio.h>
int main(){
  int a[]={4,5,6,7};
  int b[4];

  for(int i=0; i<4; i++){
    b[i]=a[i];
  }

  for(int k=0; k<4; k++){
    printf("%d",b[k]);
  }

}

// Process of copy of array
/*
let's say we have an array
            0 1 2 3 4- index 
  int a[5]={1,5,4,5,6}
  int b[5]={0,0,0,0,0}

  we will run a loop and set the data to one array to another

  a[0]=b[0]
  a[2]=b[2]
  a[3]=b[3]
  a[4]=b[4]
  a[5]=b[5]
*/