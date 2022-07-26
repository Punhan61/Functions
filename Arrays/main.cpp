#include<iostream>
using namespace std;

#define tab "\t"
void FillRand(int arr[], const int n); 
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int MinValueIn(int arr[], const int n);
int MaxValueIn(int arr[], const int n);
void ShiftLeft(int arr[], const int n,int shift);
void ShiftRight(int arr[], const int n,int shift);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int shift;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среденее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов массива: " << MinValueIn(arr, n) << endl;
	cout << "Махсимальное значение элементов массива: " << MaxValueIn(arr, n) << endl;
	cout << "Сдвиг масива влево: "; cin >> shift; cout << endl;
	ShiftLeft(arr, n, shift); Print(arr, n);
	cout << "Сдвиг масива вправо: "; cin >> shift; cout << endl;
	ShiftRight(arr, n, shift); Print(arr, n);
	
	
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами
	for (int i=0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	//return (double)Sum(arr,n)/n;
	double sum = 0;double avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
    avg += sum / n;
	return avg;
}

int MinValueIn(int arr[], const int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int MaxValueIn(int arr[], const int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void ShiftLeft(int arr[], const int n,int shift)
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

void ShiftRight(int arr[], const int n,int shift)
{
	for (int i = 0; i < shift; i++)
	{
	     int buffer = arr[n-1];
	     for (int j = n - 1; j >= 0; j--)
	     {
		     arr[j] = arr[j - 1];
	     }
		 arr[0] = buffer;
	}
}

	