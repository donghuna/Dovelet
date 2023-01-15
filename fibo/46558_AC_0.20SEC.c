#include <stdio.h>

int main(void){
 int a[44];
 int i;
 
 a[0]=2;
 a[1]=3;
 
 for(i=2; i<44; i++){
  a[i] = a[i-1]+a[i-2];
 }

 scanf("%d",&i);
 printf("%d\n",a[i-1]);

 return 0;
} 