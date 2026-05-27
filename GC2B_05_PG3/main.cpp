#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;


class Enemy
{
public:

	// 状態
	enum class Phase
	{
		Approach, // 接近
		Shot,     // 射撃
		Leave     // 離脱
	};

	// コンストラクタ
	Enemy()
	{
		phase_ = Phase::Approach;
		timer_ = 0;
	}

	// 更新
	void Update()
	{
		
		(this->*spFuncTable[static_cast<size_t>(phase_)])();
	}

private:

	
	// 接近
	
	void Approach()
	{
		printf("敵が接近しています\n");

		timer_++;

		
		if (timer_ >= 1)
		{
			timer_ = 0;
			phase_ = Phase::Shot;
		}
	}

	
	// 射撃
	
	void Shot()
	{
		printf("敵が射撃しています\n");

		timer_++;

		
		if (timer_ >= 1)
		{
			timer_ = 0;
			phase_ = Phase::Leave;
		}
	}

	
	// 離脱

	void Leave()
	{
		printf("敵が離脱しています\n");

		timer_++;
	}

private:

	
	Phase phase_;

	
	int timer_;

	
	static void (Enemy::* spFuncTable[])();
};


void (Enemy::* Enemy::spFuncTable[])() =
{
	&Enemy::Approach, // 接近
	&Enemy::Shot,     // 射撃
	&Enemy::Leave     // 離脱
};


int main()
{
	SetConsoleOutputCP(65001);

	Enemy enemy;

	
	for (int i = 0; i < 3; i++)
	{
		enemy.Update();

		Sleep(1000);
	}

	return 0;
}