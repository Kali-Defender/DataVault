#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int r=x;
	int t=0;
	if(x<0){
		x=-x;
	}
	while(x>0){
		t=t*10+x%10;
		x/=10;
	}
	if(t==r){
		printf("%d是回文数",r);
	}
}
