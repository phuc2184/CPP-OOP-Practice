#include "Rectangle.h"

int main() {
    Rectangle* recta = Rectangle::getInstance();
        recta->setWidth(6);
        recta->setHeight(8);
        cout << "Area A: " << recta->area() << endl; 

        Rectangle* rectb = Rectangle::getInstance(); 
        cout << "Area B: " << rectb->area() << endl;

        // Rectangle *rectc = new Rectangle(); //error

        return 0;
}