#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int tmp = 0;

	scanf("%d %d", &a, &b);
	
	tmp = a;
	a = b;
	b = tmp;

	printf("%d %d\n", a, b);
	return 0;
}