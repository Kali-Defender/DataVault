#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[10000]; 
	int t=0;
	while(1)
	{
		a[t]=n;
		t++;
		if(n==1) break;
		if(n%2==0) n/=2;
		else n=3*n+1;
		if(t>10000) break;
	}
	for (int i = t - 1; i >= 0; i--) 
	{
		printf("%d", a[i]);
		if(i>0) printf(" ");
    }
//    printf("EOF");
	
	return 0;
}
