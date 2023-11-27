#pragma once

//変数定義
class Enemy
{
public:
	float x;  //ｘ座標情報
	float y;  //ｙ座標情報

	float rasius;  //半径情報
	int color;  //色情報

	//進行方向ベクトル処理
	float move_x;
	float move_y;

	Enemy();
	Enemy(float mx, float my);
	~Enemy();

	//関数
	void Update();
	void Draw();
	void Move();  //動き
	void Bound();  //跳ね返り
};
