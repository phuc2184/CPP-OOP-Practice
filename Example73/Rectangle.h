#pragma once
template <class T>
class Item {
	T data;
public :
	Item();
	void setData(T value);
	T getData() const;
	void printData();
};
#include "Rectangle.cpp"