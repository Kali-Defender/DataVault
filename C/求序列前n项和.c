#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double a=2;
	double b=1;
	double sum=0;
	double t=0;
	for(int i=1;i<=n;i++){
		sum+=a/b;
		t=a;
		a=a+b;
		b=t;
	}
	printf("%g",sum);
	return 0;
}

