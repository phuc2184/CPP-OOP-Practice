#pragma once
namespace shape {
	class Rectangle {
	protected:
		int width;
		int height;
	public:
		void setValuess(int w, int h);
		int area();
	};
}