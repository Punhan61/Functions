#include<iostream>
using namespace std;
//#define ELEVATOR
//#define FACTORIAL
//#define POWER
//#define FIBONSCCI
//#define FIBONSCCI_2
void elevator(int floor);
int Factorial(int n);
double Power(double a, int n);
void Fibonacci(int n, int a = 0, int b = 1);
void Fibonacci_2(int n, int a = 0, int b = 1);
void Fibonacci_3(int n, int a = 0, int b = 1);

void main()
{
	setlocale(LC_ALL, "");
#ifdef ELEVATOR
	cout << "Hello World";
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR

#ifdef FACTORIAL
	int n;
	cout << "Введите чило для вычесления факториала: "; cin >> n;
	cout << "Факториал числа " << n << " = " << Factorial(n) << endl;

#endif // FACTORIAL

#ifdef POWER
	int n; double a;
	cout << "Возведение в степень " << endl;
	cout << "Ведите число: "; cin >> a;
	cout << "Ведите степень числа: "; cin >> n;
	cout << n << " ^ " << a << " = " << Power(a, n) << endl;

#endif // POWER

#ifdef FIBONSCCI
	int n;
	cout << "Ряд Фибоначчи:введите предельное число "; cin >> n;
	Fibonacci(n);
#endif // FIBONSCCi

#ifdef Fibonacci_2
	int n;
	cout << "Введите заданное количество чисел из ряда Фибоначчи :"; cin >> n;
	Fibonacci_2(n);
#endif // Fibonacci_2
	int n;
	cout << "Введите заданное количество чисел из ряда Фибоначчи :"; cin >> n;
	Fibonacci_3(n);
}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor-1);
	cout << "Вы на " << floor << " этаже\n";
}

int Factorial(int n)
{
	/*if (n == 0)return 1;
	else return n * Factorial(n - 1);*/
	return n == 0 ? 1 : n * Factorial(n - 1);
}

double Power(double a, int n)
{
	//if (n == 0)return 1;
	//else if (n > 0) return a * Power(a, n - 1);
	//else return 1 / a * Power(a, n + 1);
	//else return (1 / a, -n);
	return n == 0 ? 1 : n > 0 ? a * Power(a, n - 1) : 1 / a * Power(a, n + 1);
}

void Fibonacci(int n,int a,int b)
{   
	if (a > n)return;
	cout << a << "\t";
	Fibonacci(n, b, a + b);
}

void Fibonacci_2(int n, int a, int b )
{
	if (n==0)return;
	cout << a << "\t";
	Fibonacci_2(n-1, b, a + b);
}

void Fibonacci_3(int n, int a , int b)
{
	

}