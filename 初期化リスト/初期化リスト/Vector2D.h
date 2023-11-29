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

	Vector2D(float scalar) : x(scalar), y(scalar)
	{

	}

	Vector2D(float mx, float my) : x(mx), y(my)
	{

	}
};