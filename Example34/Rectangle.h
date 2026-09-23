#pragma once
class Rectangle {
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int w, int h);
	int area();
	bool operator>(Rectangle& rect);

};