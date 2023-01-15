#include <stdio.h>

int main(void)
{
	int a, b;
	float result;
	scanf("%d %d", &a, &b);

	result = (float)(a*b)/2;
	printf("%.2f\n", result);

	return 0;
}