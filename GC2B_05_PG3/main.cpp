#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void (*PFunc)(int*);

// 勝ち
void Win(int* sum)
{
	printf("\nサイコロの目の和 : %d\n", *sum);
	printf("結果 : 勝ち\n");
}

// 負け
void Lose(int* sum)
{
	printf("\nサイコロの目の和 : %d\n", *sum);
	printf("結果 : 負け\n");
}

// 入力
int InputPlayer()
{
	int num;

	printf("丁(偶数)なら0を入力\n");
	printf("半(奇数)なら1を入力\n");

	scanf_s("%d", &num);

	return num;
}

// サイコロランダム
int RollDice()
{
	return rand() % 6 + 1;
}

// 判定
PFunc Judge(int player, int sum)
{
	
	if (player == 0)
	{
		if (sum % 2 == 0)
		{
			return Win;
		}

		return Lose;
	}

	
	if (sum % 2 != 0)
	{
		return Win;
	}

	return Lose;
}


void setTimeout(PFunc p, int second, int* sum)
{
	printf("\nサイコロを振っています...\n");

	
	Sleep(second * 1000);

	p(sum);
}

int main()
{
	SetConsoleOutputCP(65001);

	srand((unsigned int)time(nullptr));

	
	int player = InputPlayer();

	
	int dice1 = RollDice();
	int dice2 = RollDice();

	
	int sum = dice1 + dice2;

	
	PFunc resultFunc;
	resultFunc = Judge(player, sum);

	
	setTimeout(resultFunc, 3, &sum);


	printf("\nサイコロの目1 : %d\n", dice1);
	printf("サイコロの目2 : %d\n", dice2);

	return 0;
}