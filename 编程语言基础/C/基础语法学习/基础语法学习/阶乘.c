#include<stdio.h>
void Factorial()
{
	int n;
	scanf_s("%d", &n);
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("%d!=%d", n, fact);
	return ;
}