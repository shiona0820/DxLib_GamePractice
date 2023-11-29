#pragma once

class Vector2D
{
public:
	float x;
	float y;

public:
	Vector2D() : x(0.0f), y(0.0f)
	{

	}

	Vector2D(float mx, float my) : x(mx), y(my)
	{

	}

	Vector2D& operator = (Vector2D& location)
	{
		this->x = location.x;
		this->y = location.y;

		return *this;
	}
};
