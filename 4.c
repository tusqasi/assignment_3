#include<stdio.h>

void main(){
    int x=0, arm=0, rem=0, temp;
    scanf("%d",&x);
    temp =x; 
    while(x>=1){
      rem = x%10;
      x/=10; 
      arm+=rem*rem*rem;
    }
    if(temp==arm)
      printf("%d is armstrong number", arm);
    else
      printf("%d is not armstrong number", temp);


}

