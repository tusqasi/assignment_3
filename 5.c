#include<stdio.h>

void main(){
  int x, sum=0, rem;
  scanf("%d",&x);

  for(int i=1;i<x;i++){
    rem = x%i;
    if(rem==0)
      sum+=i;
  }
  if(sum==x)
    printf("%d is perfect number\n", x);
  else
    printf("%d is not perfect number\n", x);
}
