#include"Bar.h"
#include"DxLib.h"

#define BAR_SIZE_X  (30.0f)

Bar::Bar()
{
	x = 0.0f;
	y = 0.0f;
}

Bar::~Bar()
{

}

void Bar::Update()
{

}

void Bar::Draw()
{
	DrawBoxAA(x - BAR_SIZE_X, y, x + BAR_SIZE_X, y + 10.0f, GetColor(123, 333, 247), TRUE);
}

void Bar::SetLocation(float mx, float my)
{
	if (mx < BAR_SIZE_X) 
	{
		x = BAR_SIZE_X;
	}
	else if(mx > (640 - BAR_SIZE_X))
	{
		x = (640 - BAR_SIZE_X);
	}
	else
	{
		x = mx;
	}
	y = my;
}