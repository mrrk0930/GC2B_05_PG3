#include "Circle.h"
#include <stdio.h>

const float PI = 3.141592f;

Circle::Circle(float radius)
{

	radius_ = radius;
	area_ = 0.0f;

}

void Circle::Size()
{

	area_ = PI * radius_ * radius_;

}

void Circle::Draw()
{

	printf("円の面積 : %.2f\n", area_);

}