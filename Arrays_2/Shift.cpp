#include"constants.h"

template<typename T>void ShiftLeft(T arr[], const int n, const int shift)
{

	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
template<typename T>void ShiftRight(T arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		T buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}


