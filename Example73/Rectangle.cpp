#include "Rectangle.h"
#include <iostream>
using namespace std;
template <class T>
Item<T>::Item() :data(T()) {

}
template <class T>
void Item<T>::setData(T value) {
	data = value;
}
template <class T>
T Item<T>::getData()const {
	return data;
}
template <class T>
void Item<T>::printData() {
	cout << data << endl;
}