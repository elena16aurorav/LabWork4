#include "Point.h"
#include <iostream>

Point::Point(int x, int y) {
	m_x = x;
	m_y = y;
};

std::ostream& operator<<(std::ostream & os, const Point& point)
{
	os << "Center: " << "x="<<point.m_x <<" y="<<point.m_y<< std::endl;
	return os;
};

/*std::ofstream& operator<<(std::ofstream& ofs, const Point& point)
{
	ofs << cir.m_point << " " << cir.m_diametr;
	return ofs;
}*/
