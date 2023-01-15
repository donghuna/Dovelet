#include <stdio.h>

int main(void)
{
	int money;
	int a, b, c;

	scanf("%d", &money);
	money = 1000 - money;

	a = money / 100;
	money = money - a*100;
	b = money / 50;
	money = money - b*50;
	c = money / 10;
	printf("%d %d %d\n", a, b, c);
	
	return 0;
}