
#include <stdio.h>

int main(void)
{
	int a, b,c,d;
	float result;
	scanf("%d %d %d %d", &a, &b,&c,&d);

	result = (float)(a+b+c+d)/4;
	printf("%.2f\n", result);
	
	return 0;
}