#include <stdio.h>

class Circle {
private:
	int cx, cy;
	int radius;

public:
	Circle(int acx, int acy, int aradius) {
		cx = acx;
		cy = acy;
		radius = aradius;
	}
	Circle(int left, int top, int right, int bottom) {
		cx = (left + right) / 2;
		cy = (top + bottom) / 2;
		radius = right - cx;
	}
};

int main()
{
	Circle c1(20, 20, 10);
	Circle c2(100, 100, 200, 200);
}