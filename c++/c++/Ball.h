#pragma once

//•Ï”’è‹`
class Player
{
public:
	float x;
	float y;
	float radius;
	int color;
	float move_x;
	float move_y;

public:
	void Update();
	void Draw();
	void Move();
};
