#include<iostream>
using namespace std;

void elevator(int floor);
int Factorial(int n);
int Power(int n, int a);
int Fibonacci(int n);
void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello World";
	/*int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);*/
	int n, a;
	/*cout << "������� ���� ��� ���������� ����������: "; cin >> n;
	cout << "��������� ����� " << n << " = " << Factorial(n) << endl;
	
	cout << "���������� � ������� " << endl;
	cout << "������ �����: "; cin >> n;
	cout << "������ ������� �����: "; cin >> a;
	cout << n << " ^ " << a << " = " << Power(n, a) << endl;*/

	cout << "��� ���������:������� ����� "; cin >> n;
	cout << Fibonacci(n);
	
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
	if (n == 0)return 0;
	if (n == 1)return 1;
	return n * Factorial(n - 1);
}
int Power(int n, int a)
{
	if (a < 1)return 1;
	else return n * Power(n, (a - 1));
}
// �� ���� �����������
int Fibonacci(int n)
{   int c ;
	if (n == 0)return 0;
	if (n == 1 || n == 2)return 1;
	for (int i = 0; i <= n; i++)
	{
		c = Fibonacci(n - 1) + Fibonacci(n - 2);
		cout<< c;
	}

}