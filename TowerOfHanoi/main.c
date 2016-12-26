/*
	Tower of Hanoi Algorithm
*/

#include <stdio.h>
#include <string.h>


void hanoi(int n, char a, char b, char c)
{
	if(n>0)
	{
		hanoi(n-1, a,b,c);
		printf("%c -> %c\n", a, c);
		hanoi(n-1, b,c,a);
	}
}

int main(void)
{
	hanoi(3, 'a','b','c');
}