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

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);


int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
char Avg(char arr[], const int n);

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
float MinValueIn(float arr[], const int n);
char MinValueIn(char arr[], const int n);

int MinValueIn(int arr[ROWS][COLS], const int ROWS,const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS,const int COLS);
double MinValueIn(float arr[ROWS][COLS], const int ROWS,const int COLS);
char MinValueIn(char arr[ROWS][COLS], const int ROWS,const int COLS);


int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);
char MaxValueIn(char arr[], const int n);

int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float MaxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n, const int shift);
void ShiftLeft(double arr[], const int n, const int shift);
void ShiftLeft(float arr[], const int n, const int shift);
void ShiftLeft(char arr[], const int n, const int shift);

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int ,const int shift);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int ,const int shift);
void ShiftLeft(float arr[ROWS][COLS], const int ROWS, const int ,const int shift);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int ,const int shift);

void ShiftRight(int arr[], const int n, const int shift);
void ShiftRight(double arr[], const int n, const int shift);
void ShiftRight(float arr[], const int n, const int shift);
void ShiftRight(char arr[], const int n, const int shift);


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int shift = 2;
	cout << "����� ������� ���� int " << endl;
	FillRand(arr, n);
	Print(arr, n);
	cout << "���������� �������: " << endl;
	Sort(arr, n);
	Print(arr, n);

	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������� ��������������: " << Avg(arr, n) << endl;

	cout << "����������� �������� ��������� �������: " << MinValueIn(arr, n) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(arr, n) << endl;

	cout << "����� ������� �����: " << endl;
	ShiftLeft(arr, n, shift); Print(arr, n); cout << endl;
	cout << "����� ������� ������: " << endl;
	ShiftRight(arr, n, shift); Print(arr, n); cout << endl;
	cout << delimetr << endl;

	const int SIZE = 8;
	double brr[SIZE];
	cout << "����� ������� ���� double " << endl;
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "���������� �������: " << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	
	cout << "����������� �������� ��������� �������: " << MinValueIn(brr, SIZE) << endl;
	cout << "������������ �������� ��������� �������: " << MinValueIn(brr, SIZE) << endl;
	
	cout << "����� ������� �����: " << endl;
	ShiftLeft(brr, SIZE, shift); Print(brr, SIZE);
	cout << "����� ������� ������: " << endl;
	ShiftRight(brr, SIZE, shift); Print(brr, SIZE);
	cout << delimetr << endl;

	const int f = 7;
	float frr[f];
	cout << "����� ������� ���� float " << endl;
	FillRand(frr, f); 
	Print(frr, f);
	cout << "���������� �������: " << endl;
	Sort(frr, f);
	Print(frr, f);
	cout << "����� ��������� �������: " << Sum(frr, f) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(frr, f) << endl;
	
	cout << "����������� �������� ��������� �������: " << MinValueIn(frr, f) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(frr, f) << endl;
	
	cout << "����� �������� �����: " << endl;
	ShiftLeft(frr, f, shift); Print(frr, f);
	cout << "����� �������� ������: " << endl;
	ShiftRight(frr, f, shift); Print(frr, f);

	cout << delimetr << endl;
	cout << "����� ������� ���� char: " << endl;
	const int c = 6;
	char crr[c];
	FillRand(crr, c);
	Print(crr, c);
	cout << "����� ��������� �������: " << Sum(crr, c) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(crr, c) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(crr, c) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(crr, c) << endl;
	cout << "����� ������� �����: " << endl; 
	ShiftLeft(crr, c, shift); Print(crr, c);
	cout << "����� ������� ������: " << endl; 
	ShiftRight(crr, c, shift); Print(crr, c);
	// ��������� ������
	cout << delimetr << endl;
	int i_arr_2[ROWS][COLS];
	cout << "����� ���������� ������� ���� int : " << endl;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "����� ������� �����: " << endl;
	ShiftLeft(i_arr_2, ROWS, COLS, shift);
	Print(i_arr_2,ROWS,COLS);

	cout << delimetr << endl;
	int d_arr_2[ROWS][COLS];
	cout << "����� ���������� ������� ���� double: " << endl;
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������:" << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������:" << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(d_arr_2, ROWS, COLS) << endl;
	cout << "����� ������� �����: " << endl;
	ShiftLeft(d_arr_2, ROWS, COLS, shift);
	Print(d_arr_2, ROWS, COLS);

	cout << delimetr << endl;
	cout << "����� ���������� ������� ���� float: " << endl;
	int f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS); 
	Print(f_arr_2, ROWS, COLS);
	cout << "����� ��������� �������:" << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������:" << Avg(f_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(f_arr_2, ROWS, COLS) << endl;
	cout << "����� ������� �����: " << endl;
	ShiftLeft(f_arr_2, ROWS, COLS, shift);
	Print(f_arr_2, ROWS, COLS);

	cout << delimetr << endl;
	cout << "����� ���������� ������� ���� char: " << endl;
	int c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "����� ��������� �������:" << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "����������� �������� ��������� �������: " << MinValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "������������ �������� ��������� �������: " << MaxValueIn(c_arr_2, ROWS, COLS) << endl;
	cout << "����� ������� �����: " << endl;
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
		arr[i] = rand() % 100;
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
			arr[i][j] = rand() % 100;
		}
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
	}
}

void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
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

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
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
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
     sum += arr[i]; 
	}
	return sum;
}

int Sum(int i_arr_2[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += i_arr_2[i][j];
		}
	}
		return sum;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	//return (double)Sum(arr,n)/n;
	double sum = 0; double avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	avg += sum / n;
	return avg;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;

}

float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}

char Avg(char arr[], const int n)
{
	char sum = 0; char avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	avg += sum / n;
	return avg;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS, COLS);
}

double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int MinValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

double MinValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

float MinValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

char MinValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
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

double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
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

double MinValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
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

char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
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

int MaxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

double MaxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float MaxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

char MaxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
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

double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i< ROWS; i++)
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

float MaxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
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

char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
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
	return (char)max;
}

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
	for (int i = 0; i < shift;i++)
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


