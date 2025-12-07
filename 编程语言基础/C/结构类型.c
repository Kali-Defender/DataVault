#include<stdio.h>
struct data{
	int mouth;
	int day;
	int year;
};
int main()
{
	struct data today;
	today.mouth=07;
	today.day=31;
	today.year=2014;
	printf("Today's data is %i-%i-%i.\n",today.year,today.mouth,today.day);
	return 0;
}
