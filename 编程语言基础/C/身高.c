#include<stdio.h>
int main()
{
	float foot;
	float inch;
	scanf("%f %f",&foot,&inch);
	printf("身高为:%f",(foot+inch/12.0)*0.3048);
	return 0;
}
