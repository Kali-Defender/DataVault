#include<stdio.h>
void swap(int* pa, int* pb);
void Exchange()
{
	int a = 4;
	int b = 9;
	swap(&a, &b);
	printf("a=%d,b=%d", a, b);
	return;
}
void swap(int* pa, int* pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}