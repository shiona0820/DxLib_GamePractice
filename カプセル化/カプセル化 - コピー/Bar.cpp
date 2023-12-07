#include"Bar.h"
#include"DxLib.h"

//#define BAR_SIZE_X  (30.0f)

//èâä˙âª
Bar::Bar()
{
	x = 0.0f;
	y = 0.0f;
	radius = 10;
}

Bar::~Bar()
{

}

void Bar::Update()
{

}

//ï`âÊ
void Bar::Draw()
{
	//DrawBoxAA(x - BAR_SIZE_X, y, x + BAR_SIZE_X, y + 10.0f, GetColor(123, 333, 247), TRUE);
	DrawCircleAA(x, y, radius, 100, GetColor(123, 333, 247), TRUE);
}

void Bar::SetLocation(float mx, float my)
{
	if (mx < 10) //íZå`Ç…Ç∑ÇÈÇ»ÇÁÇPÇOÅÅBAR_SIZE_X
	{
		x = 10;
	}
	else if(mx > (640 - 10))
	{
		x = (640 - 10);
	}
	else
	{
		x = mx;
	}
	y = my;
}

float Bar::Get_X()
{
	return x;
}

float Bar::Get_Y()
{
	return y;
}

float Bar::Get_radius()
{
	return radius;
}
