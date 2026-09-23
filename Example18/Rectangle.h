#pragma once
class Rectangle {
private:
	int width;
	int height;
public:
	Rectangle(int w, int h);
	void setWidth(int w);
	int getWidth();
	void setHeight(int h);
	int getHeight();
	int area();
};