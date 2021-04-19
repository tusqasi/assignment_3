#include<stdio.h>
void main(){
    int p=0, n=0,x;
    for(int  i=0;i<10;i++){
      scanf("%d",&x);
      if(x>0)
        p++;
      else
        n++;
    }
    printf("%d: +ve\n %d: -ve",p,n);
}
