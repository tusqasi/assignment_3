#include<stdio.h>
void main(){
    int sum=0;
    for(int i=10;i<=310;i++){
      if(63%i !=0 && i%7 == 0){
        sum+=i;
      }
    }
    printf("%d\n",sum);
}
