#include"Ball.h"
#include"DxLib.h"

//�X�V����
void Player::Update()
{
	x += move_x;
	y += move_y;
}

//�`��
void Player::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}

//�ړ�
void Player::Move()
{
	//��
	if (CheckHitKey(KEY_INPUT_LEFT) == 1)
	{
		move_x = -2.0f;
	}
	//�E
	else if (CheckHitKey(KEY_INPUT_RIGHT) == 1)
	{
		move_x = 2.0f;
	}
	//��
	else if (CheckHitKey(KEY_INPUT_UP) == 1)
	{
		move_y = -2.0f;
	}
	//��
	else if (CheckHitKey(KEY_INPUT_DOWN) == 1)
	{
		move_y = 2.0f;
	}
	//�������Ȃ��Ƃ�
	else
	{
		move_x = 0.0f;
		move_y = 0.0f;
	}
}