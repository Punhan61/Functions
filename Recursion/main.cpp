#include<iostream>
using namespace std;

void elevator(int floor);
int Factorial(int n);
int Fibonacci(int n);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	/*int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);*/
	int n, f;
	cout << "������� ���� ��� ���������� ����������: "; cin >> n;
	f = Factorial(n);
	cout << "Factorial " << n << " = " << f << endl;
	
	
	cout << "��� ���������,������� ����� �� ���������� �������: "; cin >> n;
	cout<< Fibonacci(n);
	
}
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor-1);
	cout << "�� �� " << floor << " �����\n";
}

int Factorial(int n)
{
	if (n > 1)
	{
		return n * Factorial(n - 1);
	}

}

int Fibonacci(int n)
{
	if (n < 2)return n;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
	cout << Fibonacci(n);
}
