#include<stdio.h>
int main()
{
	int m,n;
	int count=0;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m==1){
		m=2;
	}
	for(int i=m;i<=n;i++){
		int flag=1;//是素数
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1){
		count++;
		sum+=i;
		}
	}
	printf("%d %d",count,sum);
	return 0;
}
