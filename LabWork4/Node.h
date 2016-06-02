#pragma once
# include "Circle.h"

class Node{
	Circle m_data;//данные, которые будут содержаться в каждом Node списка
	Node* pPrev;//указатель, которые содержит адрес предыдущего элемента списка (т.е. Node)
	Node* pNext;//указатель, которые содержит адрес следующего элемента списка (т.е. Node)

public:
	Node();
	Node(Node* p, const Circle& circle);
	~Node();

	friend class List;
	friend std::ostream & operator<<(std::ostream & os, const List & ls);

};