#include<stdio.h>

void main(){
  for(int i=0;i<8;i++){
    for(int j=0;j<8-i;j++){
      printf("*");} 
    printf("\n");
  }
}
