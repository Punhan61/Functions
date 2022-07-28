#pragma once
#include"constants.h"
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

int MinValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
char MinValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);


int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);
char MaxValueIn(char arr[], const int n);

int MaxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
float MaxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
char MaxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);