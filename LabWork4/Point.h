#include <iostream>

class Point
{
	int m_x;
	int m_y;

public:
	Point(int x=0, int y=0);
	//����������� � �����������, � 
	//�������� ��� ��������� ����� �������� �� ���������
	//������������ ������������ �� ���������.
	friend std::ostream& operator<<(std::ostream& os, const Point& point);

	friend class Circle;
	
};