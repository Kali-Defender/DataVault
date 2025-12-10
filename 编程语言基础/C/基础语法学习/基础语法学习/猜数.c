#include <stdio.h>      
#include <stdlib.h>     // 必须！用于 rand() 和 srand()
#include <time.h>       // 必须！用于 time()

void Guess() {
	srand(time(0));                     // 初始化随机种子
	int number = rand() % 100 + 1;      // 生成 1~100 的随机数
	int count = 0;                      // 记录猜测次数
	int a = 0;                          // 用户输入的猜测值

	printf("我已经想好了一个1到100之间的数。\n");
	do {
		printf("请猜这个1到100之间数： ");
		scanf_s("%d", &a);
		count++;

		if (a > number) {
			printf("你猜的数大了。\n");
		}
		else if (a < number) {
			printf("你猜的数小了。\n");
		}
	} while (a != number);

	printf("太好了，你用了%d次就猜到了答案。\n", count);
	return ;
}