#include "Rectangle.h"
#include "Square.h"
int Rectangle::area(){
	return (width * height);
}
void Rectangle::convert(Square a){
	width = a.side;
	height = a.side;
}