#include <stdio.h>

int main(void)
{
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;

	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("%.2f", (a+b+c+d)/4);
	return
}