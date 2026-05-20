#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void (*PFunc)(int*);

//遅延
void setTimeout(PFunc p, int second, int* sum)
{
	
	printf("\nサイコロを振っています.....\n");

	Sleep(second * 1000);

	p(sum);

}

int main(int argc, const char* argv[])
{
	
	SetConsoleOutputCP(65001);

	srand((unsigned int)time(nullptr));

	//勝ち
	auto Win = [](int* sum)
	{

			printf("\nサイコロの目の和 : %d\n", *sum);
			printf("結果 : 正解\n");

	};

	//負け
	auto Lose = [](int* sum)
	{
			
			printf("\nサイコロの目の和 : %d\n", *sum);
			printf("結果 : 不正解\n");
	
	};

	//入力
	auto InputPlayer = []()
	{
			
			int num;

			printf("丁(偶数)なら0を入力\n");
			printf("半(奇数)なら1を入力\n");

			scanf_s("%d", &num);

			return num;
	
	};

	//サイコロ
	auto RollDice = []()
	{
			
			return rand() % 6 + 1;
	
	};

	
	//入力
	int player = InputPlayer();


	//サイコロ
	int dice1 = RollDice();
	int dice2 = RollDice();

	//合計
	int sum = dice1 + dice2;

	//丁半判定
	PFunc resultFunc;

	//
	auto Judge = [&](int sum)
		{
			// 丁
			if (player == 0)
			{
				if (sum % 2 == 0)
				{
					return +Win;
				}

				return +Lose;
			}

			// 半
			if (sum % 2 != 0)
			{
				return +Win;
			}

			return +Lose;
		};

	//
	resultFunc = Judge(sum);

	//遅延実行
	setTimeout(resultFunc, 3, &sum);

    //表示
	printf("\nサイコロ1 : %d\n", dice1);
	printf("サイコロ2 : %d\n", dice2);

	return 0;

}