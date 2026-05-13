#include<iostream>
#include<Windows.h>
#include<stdio.h>

int add(int a, int b) 
{

	return a + b;

}

int sub(int a, int b)
{

	return a - b;

}

typedef void (*PFunc)(int*);

void DispResult(int* s) 
{

	printf("%d秒\n", *s);

}

void setTimeout(PFunc p, int second) 
{

	Sleep(second * 1000);

	p(&second);

}

int main()
{
	SetConsoleOutputCP(65001);

	int l = 100;
	int h = 200;

	int (*calc)(int, int);

	calc = add;
	printf("%d\n", calc(l, h));

	calc = sub;
	printf("%d\n", calc(l, h));

	printf("\nstart\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 5);

	return 0;
}