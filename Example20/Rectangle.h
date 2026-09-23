#pragma once
class Rectangle {
	int* width;
	int* height;
public:
	Rectangle(int, int);
	Rectangle(Rectangle& rect);
	void del();
	int area();
	void setValues(int w, int h); 


};
