#include<iostream>
using namespace std;
#define delimetr "-----------------------------------------"
#define tab "\t"

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T MinValueIn(T arr[], const int n);
template<typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS,const int COLS);

template<typename T>T MaxValueIn(T arr[], const int n);
template<typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void ShiftLeft(T arr[], const int n, const int shift);
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int ,const int shift);
template<typename T>void ShiftRight(T arr[], const int n, const int shift);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int shift = 2;
	cout << "Вывод массива типа int " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сортировка массива: " << endl;
	Sort(arr, n);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среденее арифметическое: " << Avg(arr, n) << endl;

	cout << "Минимальное значение элементов массива: " << MinValueIn(arr, n) << endl;
	cout << "Махсимальное значение элементов массива: " << MaxValueIn(arr, n) << endl;

	cout << "Сдвиг массива влево: " << endl;
	ShiftLeft(arr, n, shift); Print(arr, n); cout << endl;
	cout << "Сдвиг массива вправо: " << endl;
	ShiftRight(arr, n, shift); Print(arr, n); cout << endl;
	cout << delimetr << endl;

	const int SIZE = 8;
	double brr[SIZE];
	cout << "Вывод массива типа double " << endl;
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сортировка массива: " << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	
	cout << "Минимальное значение элементов массива: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение элементов массива: " << MinValueIn(brr, SIZE) << endl;
	
	cout << "Сдвиг массива влево: " << endl;
	ShiftLeft(brr, SIZE, shift); Print(brr, SIZE);
	cout << "Сдвиг массива вправо: " << endl;
	ShiftRight(brr, SIZE, shift); Print(brr, SIZE);
	cout << delimetr << endl;

	const int f = 7;
	float frr[f];
	cout << "Вывод массива типа float " << endl;
	FillRand(frr, f); 
	Print(frr, f);
	cout << "Сортировка массива: " << endl;
	Sort(frr, f);
	Print(frr, f);
	cout << "Сумма элементов массива: " << Sum(frr, f) << endl;
	cout << "Среднее-аривметическое элементов массива: " << Avg(frr, f) << endl;
	
	cout << "Минимальное значение элементов массива: " << MinValueIn(frr, f) << endl;
	cout << "Максимальное значение элементов массива: " << MaxValueIn(frr, f) << endl;
	
	cout << "Сдвиг элемента влево: " << endl;
	ShiftLeft(frr, f, shift); Print(frr, f);
	cout << "Сдвиг элемента вправо: " << endl;
	ShiftRight(frr, f, shift); Print(frr, f);

	cout << delimetr << endl;
	cout << "Вывод массива типа char: " << endl;
	const int c = 6;
	char crr[c];
	FillRand(crr, c);
	Print(crr, c);
	cout << "Сумма элементов массива: " << Sum(crr, c) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, c) << endl;
	cout << "Минимальное значение элементов массива: " << MinValueIn(crr, c) << endl;
	cout << "Максимальное значение элементов массива: " << MaxValueIn(crr, c) << endl;
	cout << "Сдвиг массива влево: " << endl; 
	ShiftLeft(crr, c, shift); Print(crr, c);
	cout << "Сдвиг массива вправо: " << endl; 
	ShiftRight(crr, c, shift); Print(crr, c);
	// ДВУМЕРНЫЙ МАССИВ
	cout << delimetr << endl;
	int i_arr_2[ROWS][COLS];
	cout << "Вывод двумерного массива типа int : " << endl;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов массива: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Сдвиг массива влево: " << endl;
	ShiftLeft(i_arr_2, ROWS, COLS, shift);
	Print(i_arr_2,ROWS,COLS);

	cout << delimetr << endl;
	int d_arr_2[ROWS][COLS];
	cout << "Вывод двумерного массива типа double: " << endl;
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива:" << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << MinValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов массива: " << MaxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Сдвиг массива влево: " << endl;
	ShiftLeft(d_arr_2, ROWS, COLS, shift);
	Print(d_arr_2, ROWS, COLS);

	cout << delimetr << endl;
	cout << "Вывод двумерного массива типа float: " << endl;
	int f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS); 
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива:" << Avg(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << MinValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов массива: " << MaxValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Сдвиг массива влево: " << endl;
	ShiftLeft(f_arr_2, ROWS, COLS, shift);
	Print(f_arr_2, ROWS, COLS);

	cout << delimetr << endl;
	cout << "Вывод двумерного массива типа char: " << endl;
	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов массива: " << MinValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов массива: " << MaxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "Сдвиг массива влево: " << endl;
	ShiftLeft(c_arr_2, ROWS, COLS, shift);
	Print(c_arr_2, ROWS, COLS);
	

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template<typename T> void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
	cout << endl;
	}
}

template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
		return sum;
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

template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr,n)/n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
const char* Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return"Облом,для данных типа char невозможно вычеслить среднее-арифметическое :-(\n";
}

template<typename T>T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
template<typename T>T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

template<typename T>T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
template<typename T>T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
		return max;
}

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


