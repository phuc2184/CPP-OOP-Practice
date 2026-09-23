#pragma once
class Square {
	friend class Rectangle;
private:
	int side;
public:
	Square(int a);
};