class Point
{
	int m_x;
	int m_y;

public:
	Point(int x=0, int y=0);
	//����������� � �����������, � 
	//�������� ��� ��������� ����� �������� �� ���������
	//������������ ������������ �� ���������.
	friend class Circle;
	
};