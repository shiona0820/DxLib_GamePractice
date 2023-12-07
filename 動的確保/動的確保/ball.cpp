#include"Ball.h"
#include"DxLib.h"


//������
Ball::Ball()
{
	x = 640.0f;
	y = 480.0f;
}

Ball::Ball(float mx, float my)
{

	x = mx;
	y = my;

	now_space = 0;
	old_space = 0;
}

Ball::~Ball()
{

}

//�X�V����(���ˌ���)
void Ball::Update()
{
	x += 10.0f;
	y += 10.0f;
}

//����
void Ball::Move()
{
	old_space = now_space;						// �O��̃X�y�[�X�L�[�̏��
	now_space = CheckHitKey(KEY_INPUT_SPACE);	// ����̃X�y�[�X�L�[�̏��

	//// �͔͉�
	//if (now_space == TRUE && old_space == FALSE)
	//{
	//	x = 0.0f;
	//	y = 0.0f;
	//}

	if ((x > 640 || y > 480) && CheckHitKey(KEY_INPUT_SPACE) == 1)
	{
		x = 0.0f;
		y = 0.0f;
	}
}

//�{�[���̕`��
void Ball::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}


