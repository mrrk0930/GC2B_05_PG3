#include<iostream>
#include<Windows.h>
#include<stdio.h>

int Recursive(int n, int count)
{
	
	if (count <= 0)
	{
		return n;
	}

	
	int next = n * 2 - 50;

	
	return Recursive(next, count - 1);
}

int main()
{
	SetConsoleOutputCP(65001);

	int n = 1072;

	int reN = 100;
	int count = 7;

	int noTotal = 0;
	int reTotal = 0;

	
	for (int i = 1; i <= count; i++)
	{
		int time = i + 1;


	
		int reResult = Recursive(reN, i);

		
		noTotal = n * time;
		reTotal += reResult;

		printf("%d時間勤務 = 時給%d\n", time, reResult);
		printf("\n通常日収 合計 = %d\n", noTotal);
		printf("再帰日収 合計 = %d\n", reTotal + 100);

		printf("-------------------\n");
	}

	

	return 0;
}