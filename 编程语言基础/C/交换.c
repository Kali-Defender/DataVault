#include<stdio.h>
int main()
{
	int a;
	int b;
	int t=0;
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a的值为%d b的值为%d",a,b);
	return 0;
}
