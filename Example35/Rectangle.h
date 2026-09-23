#pragma once
class Rectangle {
	int width;
	int height;
public: 
	Rectangle();
	Rectangle(int w, int h);
	int area();
	Rectangle operator+=(Rectangle& rect);

};