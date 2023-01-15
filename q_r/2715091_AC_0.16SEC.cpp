#include <stdio.h>

int main(void)
{
	int a,b;
	int mok;
	int na;

	scanf("%d %d", &a, &b);
	mok = a / b;
	na = a%b;
	printf("%d %d\n", mok, na);

	
	return 0;
}