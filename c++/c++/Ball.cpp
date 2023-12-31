#include"Ball.h"
#include"DxLib.h"

//更新処理
void Player::Update()
{
	x += move_x;
	y += move_y;
}

//描画
void Player::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}

//移動
void Player::Move()
{
	//左
	if (CheckHitKey(KEY_INPUT_LEFT) == 1)
	{
		move_x = -2.0f;
	}
	//右
	else if (CheckHitKey(KEY_INPUT_RIGHT) == 1)
	{
		move_x = 2.0f;
	}
	//上
	else if (CheckHitKey(KEY_INPUT_UP) == 1)
	{
		move_y = -2.0f;
	}
	//下
	else if (CheckHitKey(KEY_INPUT_DOWN) == 1)
	{
		move_y = 2.0f;
	}
	//動かさないとき
	else
	{
		move_x = 0.0f;
		move_y = 0.0f;
	}
}