#include <iostream>
using namespace std;
class Rectangle {
	int width;
	int height;
public :
	void setWidth(int w) {
		width = w;
	}
	int getWidth() {
		return width;
	}
	void setHeight(int h) {
		height = h;
	}
	int getHeight() {
		return height;
	}
	int area() {
		return(width * height);
	}
};
int main() {
	Rectangle rect;
	rect.setWidth(3);
	rect.setHeight(4);
	cout << "W: " << rect.getWidth();
	cout << "H: " << rect.getHeight();
	cout << "Area: " << rect.area();
	return 0;

}