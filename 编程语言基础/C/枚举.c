#include<stdio.h>
enum color{red,green,black};
void f(enum color c);
int main()
{
	enum color t=red;
	int input;                     
	scanf("%d", &input);           
	t = (enum color)input;        
	f(t);
	return 0;
}
void f(enum color c)
{
	printf("%d\n",c);
}

