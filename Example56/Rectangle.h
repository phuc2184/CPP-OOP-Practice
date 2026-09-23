#pragma once
class Rectangle{
private:
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int x, int y);
	int area();
	friend Rectangle duplicate(Rectangle& param);
};