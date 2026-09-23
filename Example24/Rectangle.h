#pragma once
class Rectangle {
	int* width;
	int* height;
public :
	Rectangle(int w, int h);
	~Rectangle();
	int area();

};