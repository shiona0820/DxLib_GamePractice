#include"Ball.h"
#include"DxLib.h"

//初期化
Ball::Ball()
{
	x = 0.0f;
	y = 0.0f; 
	radius = 10;
}

Ball::Ball(float mx, float my)
{
	x = mx;
	y = my;
	radius = 10;
}

Ball::~Ball()
{
	
}

//ボールの描画
void Ball::Draw()
{
	DrawCircleAA(x, y, radius, 100, GetColor(255, 255, 255), TRUE);
}

//更新処理
void Ball::Update()
{
	Move();
}

void Ball::Move()
{

	x += 2.0f;
	y += 2.0f;
	

}

float Ball::Get_X()
{
	return x;
}

float Ball::Get_Y()
{
	return y;
}

float Ball::Get_radius()
{
	return radius;
}