#include "Point.h"

class Circle {
	int radius;
	Point center;

public:
	Circle(int radius=0, int x=0, int y=0);
	bool operator==(const Circle& other);
	double calculateSquare();
};