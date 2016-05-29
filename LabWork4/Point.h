class Point
{
	int m_x;
	int m_y;

public:
	Point(int x=0, int y=0);
	//конструктор с параметрами, у 
	//которого все параметры имеют значения по умолчанию
	//эквивалентен конструктору по умолчанию.
	friend class Circle;
	
};