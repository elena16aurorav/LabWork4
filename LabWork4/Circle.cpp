#include "Circle.h"

Circle::Circle(int radius, int x, int y) : center(x, y) {
	this->radius = radius;
};

bool Circle::operator==(const Circle& other) {
	return ((this->radius=other.radius)&&
	(this->center.m_x=other.center.m_x)&&
	(this->center.m_x = other.center.m_x));
};