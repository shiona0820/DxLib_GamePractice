#pragma once

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
	void Draw() const;  //描画(const=値を変更させない)   
};