#pragma once

#include "Vector2D.h"

class Ball
{
private:
	Vector2D location;
	float radius;

public:
	Ball();
	~Ball();

	void Update();
	void Draw() const;
};