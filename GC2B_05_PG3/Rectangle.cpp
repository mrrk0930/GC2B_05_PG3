#include "Rectangle.h"
#include <stdio.h>

Rectngle::Rectngle(float width, float height)
{
	
	width_ = width;
	height_ = height;
	area_ = 0.0f;

}

void Rectngle::Size()
{

	area_ = width_ * height_;

}

void Rectngle::Draw()
{

	printf("矩形の面積 : %.2f\n", area_);

}