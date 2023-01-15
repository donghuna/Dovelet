#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int value;

	scanf("%d", &value);


	a = value / (60*60*24);
	value = value - (a * 60 * 60 * 24);

	b = value / (60 * 60);
	value = value - (60 * 60 * b);

	c = value / 60;
	value = value - (c * 60);
	printf("%d %d %d %d\n", a, b, c,value);


	
	return 0;
}