#include "Point.h"
#include <ostream>

class Circle {
	int radius;
	Point center;

public:
	Circle(int radius=0, int x=0, int y=0);
	bool operator==(const Circle& other);
	double calculateSquare();

	friend std::ostream& operator<<(std::ostream& os, const Circle& circle);
	friend std::ofstream& operator<<(std::ofstream& ofs, const Circle& circle);

};