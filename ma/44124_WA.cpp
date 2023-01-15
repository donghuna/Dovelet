#include <stdio.h>

int main(){
 int a[30];
 int i,j;

 for(i=0; i<30;i++){
  scanf("%d",&a[i]);
  if(a[i] == 0)
	  break;
 }

 for(j=0; j!=9;j++){
  for(i=0; a[i-1]!=0; i++){
   if(a[i]>=(9-j))
    printf(" *");
   else printf("  ");
  }
  printf("\n");
 }

 for(i=1; a[i-1]!=0;i++){
  printf(" %d",a[i-1]);
 }
 printf("\n");
    
} 