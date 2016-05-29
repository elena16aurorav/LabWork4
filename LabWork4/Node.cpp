#include "Node.h"

Node::Node(){
	this->pNext = nullptr;
	this->pPrev = nullptr;
};

Node::Node(Node* p, const Circle& pCircle):m_data(pCircle){
	pPrev = p;
	pNext = p->pNext;
	p->pNext = this;
	pNext->pPrev = this;
};

Node::~Node(){
//Коррекция следующего
	if (pNext != 0)pNext->pPrev = pPrev;
//Коррекция предыдущего
	if (pPrev != 0)pPrev->pNext = pNext;
};