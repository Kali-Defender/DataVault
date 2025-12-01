#include<stdio.h>
int sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	printf("%d\n",sum(1,3));
	return 0;
}
