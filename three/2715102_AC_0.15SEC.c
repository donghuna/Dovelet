#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int value_1;
	int value_2;

	scanf("%d", &value_1);
	scanf("%d", &value_2);

	a = value_2 / 100;
	value_2 = value_2 - (a * 100);
	b = value_2 / 10;
	value_2 = value_2 - (b * 10);
	c = value_2;

	printf("%d\n", c*value_1);
	printf("%d\n", b*value_1);
	printf("%d\n", a*value_1);
	printf("%d\n", (c*value_1) + (b*value_1*10) + (a*value_1*100));

	
	return 0;
}