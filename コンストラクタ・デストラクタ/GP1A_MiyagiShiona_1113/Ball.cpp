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

//�X�V����
void Enemy::Update()
{
	x += move_x;
	y += move_y;
}

//�`�揈��
void Enemy::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}

//�ړ�����
void Enemy::Move()
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

//���˕Ԃ菈��(�i�s�����ύX�����j
void Enemy::Bound()
{
	//���E�ɂ�������
	if (x > 630 || x < 10)
	{
		move_x = -1 * move_x;
	}
	//�㉺
	else if (y > 470 || y < 10)
	{
		move_y = -1 * move_y;
	}
}