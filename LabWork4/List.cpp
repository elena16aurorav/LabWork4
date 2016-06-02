#pragma once
#include "List.h"
#include "Node.h"

List::List(){//используем для создания пустого списка
	this->Head.pNext = &Tail;
	this->Tail.pPrev = &Head;
	this->m_size = 0;//!!!
	//При этом, при создании Node конструктором, т.е.
	//Node::Node(){
	//this->pNext = nullptr;
	//this->pPrev = nullptr;
	//};
};

List::~List(){
	while (Head.pNext != &Tail){
		delete Head.pNext;
	};
	Head.pNext = &Tail;
	Tail.pPrev = &Head;
	this->m_size = 0;
};

int List::size(){
	Node* pNode=Head.pNext;
	int n = 0;
	while (pNode != &Tail){
		n++;
		pNode = pNode->pNext;
	};
	return n;
};
void List::AddToHead(const Circle& circle){//добавляем элемент
	//в список сразу после Head, т.е. до первого элемента.
	new Node(&Head, circle);
	this->m_size++;
};
void List::AddToTail(const Circle& circle) {//добавляем элемент
	//в список сразу до Tail, т.е. после последнего элемента до Tail.
	new Node(Tail.pPrev, circle);
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
		pNode = pNode->pNext;//переход на следующий элемент в списке
	}
	return false;
};

int List::Remove(const Circle& circle) {
	int n = 0;
	Node* pNode = Head.pNext;
	Node* pNodeNext = nullptr;
	while (pNode != &Tail) {
		pNodeNext = pNode->pNext;
		if (pNode->m_data == circle) {
			
			delete pNode;
			this->m_size--;
			n++;
		}
		pNode = pNodeNext;
	}
//	delete pNodeNext;
	return n;
};

void List::Empty() {
	while (Head.pNext != &Tail) {
		delete Head.pNext;
	};
	Head.pNext = &Tail;
	Tail.pPrev = &Head;
	this->m_size = 0;
};

void List::sort() {//пузырьковая сортировка
	Node* p = Head.pNext;
	int j = m_size;
	while (p != &Tail)
	{
		Node* np = p;
		for (int i = 0; i <j - 1; i++)
		{
			if (np->m_data.calculateSquare() > np->pNext->m_data.calculateSquare())
			{
				Node* p1 = np->pNext;
				Node* p2 = np->pPrev;
				
				p2->pNext = p1;
				np->pNext->pNext->pPrev = np->pNext;
				
				np->pNext = np->pNext->pNext;
				
				p1->pPrev = p2;
				p1->pNext = np;
				
				np->pPrev = p1;
					
			}
			np = np->pNext;
		}
		p = p->pNext;
		j--;
	}

};

std::ostream& operator<<(std::ostream & os, const List& ls)
//классы ostream и ofstream связаны наследованием (с.156)
{
	Node* p;
	p=ls.Head.pNext;
	while (p != &ls.Tail)
	{
		os << p->m_data;
		p = p->pNext;
	}
	return os;
};