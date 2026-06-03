#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{

	SetConsoleOutputCP(65001);

	float radius;
	float width;
	float height;

	printf("-- 円 --\n");
	printf("円の半径を入力してください : ");
	scanf_s("%f", &radius);

	printf("\n-- 矩形 --\n");
	printf("矩形の幅を入力してください : ");
	scanf_s("%f", &width);

	printf("矩形の高さを入力してください : ");
	scanf_s("%f", &height);

	IShape* shapes[2];

	shapes[0] = new Circle(radius);
	shapes[1] = new Rectngle(width, height);

	printf("\n-- 面積計算 --\n");

	for (int i = 0; i < 2; i++)
	{
		
		shapes[i]->Size();
		shapes[i]->Draw();
	
	}

	for (int i = 0; i < 2; i++)
	{
	
		delete shapes[i];
	
	}

	return 0;

}