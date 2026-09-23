#pragma once
class Rectangle {
private: 
	int width;
	int height;
public:
	Rectangle();
	Rectangle(int w, int h);
	int area();
	void setValues(int w, int h);
};