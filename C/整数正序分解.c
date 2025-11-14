#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int mask=1;
	int t=x;
	do{
		t/=10;
		mask*=10;
	}while(t>9);
	do{
		int d=x/mask;
		printf("%d ",d);
		x=x%mask;
		mask=mask/10;
	}while(mask>0);
}
