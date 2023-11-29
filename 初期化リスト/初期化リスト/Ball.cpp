#include"Ball.h"
#include"DxLib.h"

Ball::Ball() : location(0.0f), radius(5.0f)  //èâä˙âªéqÉäÉXÉg
{

}

Ball::~Ball()
{

}

void Ball::Update()
{
	location.x += 1.0f;
	location.y += 1.0f;
}

void Ball::Draw() const
{
	DrawCircleAA(location.x, location.y, radius, 100, GetColor(255, 255, 255), TRUE);
}