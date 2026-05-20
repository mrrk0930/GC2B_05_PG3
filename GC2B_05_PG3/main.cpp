#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int main(int argc, const char*argv[])
{
	SetConsoleOutputCP(65001);

	int num = 10;
	auto fx = [=](int i) {return num + i; };

	printf("%d", fx(5));

	return 0;
}