#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8};
	int x;
	scanf("%d",&x);
	for(unsigned int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
	{
		if(a[i]==x)
		{
			printf("%d在第%d位",x,i+1);
		}
	}
	return 0;
}
