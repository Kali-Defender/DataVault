#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int j;
	while(i<=n){
		j=1;
		while(j<=i){
			printf("%d*%d=%d",j,i,j*i);
			if(j*i<10){
				printf("  ");
			}
			else{
				printf(" ");
			}
			j++;
		}
		i++;
		printf("\n");
	}
}
