#include"Ball.h"
#include"DxLib.h"

Ball::Ball()
{
	x = 0.0f;
	y = 0.0f;
}

Ball::Ball(float mx, float my)
{
	x = mx;
	y = my;
}

Ball::~Ball()
{
}

//�X�V����
void Ball::Update()
{
	x += 1.0f;
	y += 1.0f;
}

//�`�揈��
void Ball::Draw()
{
	DrawCircleAA(x, y, 10, 100, GetColor(255, 255, 255), TRUE);
}