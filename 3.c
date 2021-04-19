#include<stdio.h>

void main(){
    int x=0,temp,rem=0,rev=0;
    scanf("%d",&x);
    temp = x;
    while(x>=1){
      rem = x%10;
      x/=10;
      rev = (rev+rem) * 10;
    }
    if(rev/10==temp)
      printf("%d is palindrome", temp);
    else
      printf("Not palindrome: %d\n", temp);
      
}
