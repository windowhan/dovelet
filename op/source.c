#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d%%%d=%d\n",a,b,a%b);
	return 0;
}