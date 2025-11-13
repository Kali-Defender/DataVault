#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=2;i<=x;i++){
		int flag=1;//是素数
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
			printf("%d ",i);
		}
	}
	return 0;
}
