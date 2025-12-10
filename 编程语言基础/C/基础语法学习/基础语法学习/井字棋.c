#include<stdio.h>
void TicTacToe()
{
	const int size = 3;
	int board[3][3];
	int i, j;
	int num0fX;
	int num0fO;
	int result = -1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			scanf_s("%d", &board[i][j]);
		}
	}
	for (i = 0; i < size && result == -1; i++)
	{
		num0fO = num0fX = 0;
		for (j = 0; j < size; j++)
		{
			if (board[i][j] == 1) {
				num0fX++;
			}
			else {
				num0fO++;
			}
		}
		if (num0fO == size) {
			result = 0;
		}
		else if (num0fX == size) {
			result = 1;
		}
	}
	if (result == -1) {
		for (i = 0; i < size && result == -1; i++)
		{
			num0fO = num0fX = 0;
			for (j = 0; j < size; j++)
			{
				if (board[i][j] == 1) {
					num0fX++;
				}
				else {
					num0fO++;
				}
			}
			if (num0fO == size) {
				result = 0;
			}
			else if (num0fX == size) {
				result = 1;
			}
		}
	}
	num0fO = num0fX = 0;
	for (i = 0; i < size; i++) {
		if (board[i][i] == 1) {
			num0fX++;
		}
		else {
			num0fO++;
		}
	}
	if (num0fO == size) {
		result = 0;
	}
	else if (num0fX == size) {
		result = 1;
	}
	for (i = 0; i < size; i++) {
		if (board[i][size - i - 1] == 1) {
			num0fX++;
		}
		else {
			num0fO++;
		}
	}
	printf("%d", result);
}