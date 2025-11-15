#include<stdio.h>
int main()
{
	int i,j,k;
	for(int n=2;n<1000;n++){
		i=n/100;
	    j=n/10%10;
	    k=n%10;
	if(i*i*i+j*j*j+k*k*k==n){
		printf("%d ",n);
	}
	}
	return 0;
}
