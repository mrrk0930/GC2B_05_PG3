#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;



int main()
{

	SetConsoleOutputCP(65001);

	Animal* animals[2];

	// 生成フェーズ
	printf("--生成フェーズ--\n");
	printf("動物達がいる\n");

	for (int i = 0; i < 2; i++)
	{

		if (i == 0)
		{
			
			animals[i] = new Dog;
		
		}
		else
		{
			
			animals[i] = new Cat;
		
		}
	
	}

	// 鳴き声フェーズ
	printf("\n--鳴き声フェーズ--\n");

	Animal animal;
	animal.Cry();

	for (int i = 0; i < 2; i++)
	{
		
		animals[i]->Cry();
	
	}

	// いなくなるフェーズ
	printf("\n--いなくなるフェーズ--\n");

	for (int i = 0; i < 2; i++)
	{
		
		delete animals[i];
	
	}
	printf("動物達がいなくなった\n");
}