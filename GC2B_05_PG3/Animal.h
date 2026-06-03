#pragma once

class Animal
{
public:
	// コンストラクタ
	Animal();

	// デストラクタ
	virtual ~Animal();

	// 鳴く
	virtual void Cry();

protected:
	// 名前
	const char* name;
};