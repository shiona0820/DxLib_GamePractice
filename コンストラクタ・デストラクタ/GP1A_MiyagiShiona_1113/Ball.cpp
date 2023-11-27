#include"Ball.h"
#include"DxLib.h"

Enemy::Enemy()
{
	x = 0.0f;
	move_x = 0;
	y = 0.0f;
	move_y = 0;
}

Enemy::Enemy(float mx, float my)
{
	x = mx;
	move_x = 1;
	y = my;
	move_y = 1;
}

Enemy::~Enemy()
{
}

//更新処理
void Enemy::Update()
{
	x += move_x;
	y += move_y;
}

//描画処理
void Enemy::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}

//移動処理
void Enemy::Move()
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

//跳ね返り処理(進行方向変更処理）
void Enemy::Bound()
{
	//左右にあたった
	if (x > 630 || x < 10)
	{
		move_x = -1 * move_x;
	}
	//上下
	else if (y > 470 || y < 10)
	{
		move_y = -1 * move_y;
	}
}