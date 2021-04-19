#include<stdio.h>
void main(){
    int sum=0;
    for(int i=10;i<=310;i++){
      if(!(i%63) || i%7){
        sum+=i;
      }
    }
    printf("%d\n",sum);
}
