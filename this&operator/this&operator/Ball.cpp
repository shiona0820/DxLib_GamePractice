#include"Ball.h"
#include"DxLib.h"

Ball::Ball() : location(0.0f,0.0f), radius(5.0f)  //‰Šú‰»ŽqƒŠƒXƒg
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

void Ball::SetLocation(Vector2D loation)
{
	this->location = location;
}