#include<stdio.h>
#include<math.h>
#define max pow(2,31)
int main() {
	int x;
	scanf("%d",&x);
	long sum=0;
	while(x!=0)
	{
		int m=x%10;
		sum=sum*10+m;
		x=x/10;
	}
	if(sum<-max||sum>max-1) printf("false");
	printf("%ld",sum);
}
