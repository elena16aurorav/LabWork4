# include "Circle.h"

class Node{
	Circle m_data;
	Node* pPrev;
	Node* pNext;

	Node();
	Node(Node* p, const Circle& pCircle);
	~Node();

	friend class List;
};