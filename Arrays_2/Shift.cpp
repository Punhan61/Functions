#include"Shift.h"

void ShiftLeft(int arr[], const int n, const int shift)
{

	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(double arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(float arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(char arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0];
		for (int j = 0; j < i; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1];
	}
}

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0][0];
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

void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[0][0];
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

void ShiftLeft(float arr[ROWS][COLS], const int ROWS, const int, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[0][0];
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

void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[0][0];
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


void ShiftRight(int arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(double arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		double buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(float arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		float buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}

void ShiftRight(char arr[], const int n, const int shift)
{
	for (int i = 0; i < shift; i++)
	{
		char buffer = arr[n - 1];
		for (int j = n - 1; j >= 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}


