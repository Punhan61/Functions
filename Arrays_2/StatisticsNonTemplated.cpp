#include"Statistics.h"

const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return"Облом,для данных типа char невозможно вычеслить среднее-арифметическое :-(\n";
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}