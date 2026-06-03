#pragma once
#include "IShape.h"

class Rectngle : public IShape
{
public:

	Rectngle(float width, float height);

	void Size() override;
	void Draw() override;

private:

	float width_;
	float height_;
	float area_;

};