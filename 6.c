#include <stdio.h>

void main(){
 for (int i=2; i<100; i++)
 {
  for (int j=2; j<=i; j++)  
  {
    if (i == j) 
      printf("%d is prime\n",i);
    else if (i%j == 0) // divides not prime
      break;
  }
 }
}
