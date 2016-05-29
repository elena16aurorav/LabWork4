# include "Circle.h"

class Node{
	Circle m_data;//������, ������� ����� ����������� � ������ Node ������
	Node* pPrev;//���������, ������� �������� ����� ����������� �������� ������ (�.�. Node)
	Node* pNext;//���������, ������� �������� ����� ���������� �������� ������ (�.�. Node)

	Node();
	Node(Node* p, const Circle& circle);
	~Node();

	friend class List;
};