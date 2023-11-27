#pragma once

class Bar
{
private:
	float x;
	float y;

public:
	Bar();
	~Bar();

	void Update();
	void Draw() const;

	void SetLocation(float mx, float my);
};
