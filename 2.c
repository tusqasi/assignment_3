#include<stdio.h>

void main(){
    int x=0, sum=0, rem=0;
    scanf("%d",&x);
    while(x>=1){
      rem = x%10;
      x/=10; 
      sum+=rem;
    }
    printf("%d\n", sum);
}
