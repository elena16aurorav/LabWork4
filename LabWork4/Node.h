#pragma once
# include "Circle.h"

class Node{
	Circle m_data;//������, ������� ����� ����������� � ������ Node ������
	Node* pPrev;//���������, ������� �������� ����� ����������� �������� ������ (�.�. Node)
	Node* pNext;//���������, ������� �������� ����� ���������� �������� ������ (�.�. Node)

public:
	Node();
	Node(Node* p, const Circle& circle);
	~Node();

	friend class List;
	friend std::ostream & operator<<(std::ostream & os, const List & ls);

};