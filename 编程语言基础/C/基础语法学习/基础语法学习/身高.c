#include <stdio.h>
void height()
{
	float foot=0.0;
	float inch=0.0;
	scanf_s("%f %f", &foot, &inch);
	printf("Éí¸ßÎª:%f", (foot + inch / 12.0) * 0.3048);
}