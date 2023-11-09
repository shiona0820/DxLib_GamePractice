#pragma once

class Ball
{
public:
	float x;
	float y;

	Ball();
	Ball(float mx, float my);
	~Ball();

	void Update();
	void Draw();
};
