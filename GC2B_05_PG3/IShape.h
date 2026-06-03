#pragma once

class IShape
{
public:

	// デストラクタ
	virtual ~IShape() {}

	// 面積計算
	virtual void Size() = 0;

	// 面積表示
	virtual void Draw() = 0;

};