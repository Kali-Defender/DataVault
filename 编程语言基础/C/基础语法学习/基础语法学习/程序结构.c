#include<stdio.h>
#define cube(x)((x)*(x)*(x))//带参数的宏,所有内容都要加括号
int all = 2;//设置全局变量，全局变量的值为常数
int main()
{
    all += 2;
	printf("all in main is %d\n", all);
	f();//全局变量的生存期和作用域是全局，所有函数都可访问
	g();//全局变量可在更小范围重新初始化
	h();
	h();
	h();//静态本地变量的生存期是全局，但作用域是局部的

	printf("%d", cube(5));
}
int f()
{
	all += 2;
	printf("all in f is %d\n", all);
}
int g()
{
	all = 8;
	printf("all in g is %d\n", all);
}
int h()
{
	static int bit = 1;//设置静态本地变量
	printf("bit in h is %d\n", bit);
	bit += 2;
	printf("bit in h is %d\n", bit);
}