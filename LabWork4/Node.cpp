#include "Node.h"

Node::Node(){
	this->pNext = nullptr;
	this->pPrev = nullptr;
};

Node::Node(Node* p, const Circle& circle):m_data(circle){
	this->pPrev = p;
	this->pNext = p->pNext;
	p->pNext = this;
	this->pNext->pPrev = this;
};

Node::~Node(){
//��������� ����������
	if (pNext != 0)pNext->pPrev = pPrev;//���������, ��� ��� �� Tail
//��������� �����������
	if (pPrev != 0)pPrev->pNext = pNext;//���������, ��� ��� �� Head
};