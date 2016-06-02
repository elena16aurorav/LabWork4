#include "Point.h"
#include <iostream>
#include <fstream>

Point::Point(int x, int y) {
	m_x = x;
	m_y = y;
};

std::ostream& operator<<(std::ostream & os, const Point& point)
{
	os << "Center: " << "x="<<point.m_x <<" y="<<point.m_y<< std::endl;
	return os;
};

std::ofstream& operator<<(std::ofstream& ofs, const Point& point)
{
	ofs << "" << point.m_x << " " << point.m_y;// << std::endl;
	return ofs;
};
