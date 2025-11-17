#include<stdio.h>
int main()
{
	int price,bill;
	printf("请输入金额：");
	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill);
	if(bill>=price){
		printf("应找回：%d",bill-price);
	}
	else{
		printf("还需要：%d",price-bill);
	}
	return 0;
}
