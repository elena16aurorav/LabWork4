#include <iostream>

class Point
{
	int m_x;
	int m_y;

public:
	Point(int x=0, int y=0);
	//конструктор с параметрами, у 
	//которого все параметры имеют значения по умолчанию
	//эквивалентен конструктору по умолчанию.
	friend std::ostream& operator<<(std::ostream& os, const Point& point);
	friend std::ofstream& operator<<(std::ofstream& ofs, const Point& point);

	friend class Circle;
	
};