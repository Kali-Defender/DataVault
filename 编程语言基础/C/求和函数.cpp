#include<stdio.h>
int sum(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",sum(a,b));
}
int sum(int a,int b)
{
	int sum=0;
	for(int i=a;i<=b;i++)
	{
		sum+=i;
	}
	return sum;
}
