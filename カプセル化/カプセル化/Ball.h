#pragma once


//�ϐ��錾
class Ball
{
private:

		float x;
		float y;

public:

	Ball();
	Ball(float mx, float my);
	~Ball();

	void Update();
	void Draw();
};
