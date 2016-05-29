#include "List.h"

List::List(){
	this->Head.pNext = &Tail;
	this->Tail.pPrev = &Head;
	this->m_size = 0;
};

List::~List(){
	while (Head.pNext != &Tail){
		delete Head.pNext;
	};
};

int List::size(){
	Node* pNode = &Head;
	int n = 0;
	while (pNode != 0){
		pNode = pNode->pNext;
		n++;
	}
	return n;
};
void List::AddToHead(const Circle& circle){
	new Node(&Head, circle);
	this->m_size++;
};
void List::AddToHead(const Circle& circle){
	new Node(&Tail, circle);
	this->m_size++;
};
bool List::RemoveOne(const Circle& circle){
	Node* pNode = Head.pNext;
	while (pNode != &Tail){
		if (pNode->m_data == circle){
			delete pNode;
			this->m_size--;
			return true;
		}
		pNode = pNode->pNext;
	}
	return false;
};
