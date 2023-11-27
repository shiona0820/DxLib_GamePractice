#pragma once

//変数宣言
class Ball
{
public:
	float x;  //ｘ座標情報
	float y;  //ｙ座標情報

	float radius;  //半径情報
	int color;  //色情報

	int now_space;
	int old_space;

	Ball();
	Ball(float mx, float my);
	~Ball();
	
	//進行方向ベクトル処理
	int move_x;
	int move_y;

	void Update();  //更新処理
	void Draw();  //描画処理

	void Move();

};
