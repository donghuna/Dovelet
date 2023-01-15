#include <stdio.h>

int main(){
 int a[30];
 int i,j,k;

 for(k=0; k<30;k++){
  scanf("%d",&a[k]);
  if(a[k] == 0)
	  break;
 }

 for(j=1; j<=9;j++){
  for(i=0; i<k; i++){
   if(a[i]>(9-j))
    printf(" *");
   else printf("  ");
  }
  printf("\n");
 }

 for(i=0; i<k;i++){
  printf(" %d",a[i]);
 }
 printf("\n");
    
} 