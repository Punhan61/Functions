#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"


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





