#pragma once

//�ϐ��錾
class Bar
{
private:
		float x;
		float y;

public:
	Bar();
	~Bar();

	void Update();
	void Draw();

	void SetLocation(float mx, float my);
};
