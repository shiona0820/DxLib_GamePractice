#pragma once


//変数宣言
class Ball
{
private:  //非公開（プライベート）

		float x;
		float y;

		float radius;

		

public:  //公開情報

	Ball();
	Ball(float mx, float my);
	~Ball();

	void Update();  //更新処理
	void Draw();   //描画処理

	//動き
	void Move();

	float Get_X();
	float Get_Y();
	float Get_radius();  //半径情報

	
};
