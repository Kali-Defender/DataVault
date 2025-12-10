#include<stdio.h>
void change()
{
	int price, bill;
	printf("请输入金额：");
	scanf_s("%d", &price);
	printf("请输入票面：");
	scanf_s("%d", &bill);
	if (bill >= price) {
		printf("应找回：%d", bill - price);
	}
	else {
		printf("还需要：%d", price - bill);
	}
	return 0;
}