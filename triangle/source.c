#include <stdio.h>

int main(void)
{
	float a = 0;
	float b = 0;
	scanf("%f %f", &a, &b);

	printf("%.2f\n", a*b/2);
	return 0;
}