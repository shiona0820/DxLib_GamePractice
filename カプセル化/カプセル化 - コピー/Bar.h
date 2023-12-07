#pragma once

//変数宣言
class Bar
{
private:  //非公開（プライベート）
		float x;
		float y;

		float radius;

		

public:  //公開情報
	Bar();
	~Bar();

	void Update();
	void Draw();

	void SetLocation(float mx, float my);

	float Get_X();
	float Get_Y();
	float Get_radius();

	
	
};
