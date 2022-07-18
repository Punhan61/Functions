#include<iostream>
using namespace std;

int Factorial(int n);
double Power(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите чило для вычесления факториала: "; cin >> n;
	cout << n << " = " << Factorial(n) << endl;
	int a, b;
	cout << "Возведение в степень "<<endl;
	cout << "Введите число: "; cin >> a;
	cout << "Введите степень числа: "; cin >> b;
	cout << a << " ^ " << b <<" = "<< Power(a, b) << endl;
}
	int Factorial(int n)
	{
		int f = 1;
		for (int i = 1; i <= n; i++)
		{
			f *= i;
		}
		return f;
	}
	double Power(int a, int b)
	{
		int N = 1;
		for (int i = 0; i < b; i++)
		{
			N *= a;
		}
		return N;
	}