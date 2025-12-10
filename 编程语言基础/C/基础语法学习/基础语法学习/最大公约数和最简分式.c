#include<stdio.h>
void gcd()
{
	int t;
	int a, b;
	scanf_s("%d %d", &a, &b);
	int i = a;
	int j = b;
	while (j != 0)
	{
		t = i % j;
		i = j;
		j = t;
	}
	printf("%d/%d", a / i, b / i);
	return ;
}