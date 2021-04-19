#include<stdio.h>

void main(){
  for(int i=0;i<8;i++){
    for(int j=1;j<8-i;j++){
      printf("%d",j);} 
    printf("\n");
  }
}
