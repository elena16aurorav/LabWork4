#include "Circle.h"
#include <iostream>
#include <fstream>

Circle::Circle(int radius, int x, int y) : center(x, y) {
	this->radius = radius;
};

bool Circle::operator==(const Circle& other) {
	return ((this->radius==other.radius)&&
	(this->center.m_x==other.center.m_x)&&
		(this->center.m_x == other.center.m_x));
};
double Circle::calculateSquare() {
	return (3.14*this->radius*this->radius);
};

std::ostream& operator<<(std::ostream & os, const Circle& circle)
{
	os << "Circle: " << circle.center << " radius=" << circle.radius << std::endl;
	return os;
};

std::ofstream& operator<<(std::ofstream& ofs, const Circle& circle)
{
	ofs << circle.center << " " << circle.radius;
	return ofs;
};
