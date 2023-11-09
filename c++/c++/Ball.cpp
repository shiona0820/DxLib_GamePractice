#include"Ball.h"
#include"DxLib.h"

//çXêVèàóù
void Player::Update()
{
	x += move_x;
	y += move_y;
}

//ï`âÊ
void Player::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}

//à⁄ìÆ
void Player::Move()
{
	//ç∂
	if (CheckHitKey(KEY_INPUT_LEFT) == 1)
	{
		move_x = -2.0f;
	}
	//âE
	else if (CheckHitKey(KEY_INPUT_RIGHT) == 1)
	{
		move_x = 2.0f;
	}
	//è„
	else if (CheckHitKey(KEY_INPUT_UP) == 1)
	{
		move_y = -2.0f;
	}
	//â∫
	else if (CheckHitKey(KEY_INPUT_DOWN) == 1)
	{
		move_y = 2.0f;
	}
	//ìÆÇ©Ç≥Ç»Ç¢Ç∆Ç´
	else
	{
		move_x = 0.0f;
		move_y = 0.0f;
	}
}