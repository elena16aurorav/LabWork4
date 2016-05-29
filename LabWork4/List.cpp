#include "List.h"

List::List(){//���������� ��� �������� ������� ������
	this->Head.pNext = &Tail;
	this->Tail.pPrev = &Head;
	this->m_size = 0;//!!!
	//��� ����, ��� �������� Node �������������, �.�.
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
	Node* pNode=nullptr;
	if (Head.pNext != &Tail) {
		pNode = Head.pNext;
	};
	int n = 0;
	while (pNode != 0){
		//pNode = pNode->pNext;
		n++;
		if (pNode == Tail.pPrev) {
			pNode = nullptr;
		}
		else {
			pNode = pNode->pNext;
			//n++;
		};
	};
	return n;
};
void List::AddToHead(const Circle& circle){//��������� �������
	//� ������ ����� ����� Head, �.�. �� ������� ��������.
	new Node(&Head, circle);
	this->m_size++;
};
void List::AddToTail(const Circle& circle) {//��������� �������
	//� ������ ����� �� Tail, �.�. ����� ���������� �������� �� Tail.
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
		pNode = pNode->pNext;
	}
	return false;
};

int List::Remove(const Circle& circle) {
	int n = 0;
	Node* pNode = Head.pNext;
	while (pNode != &Tail) {
		if (pNode->m_data == circle) {
			delete pNode;
			this->m_size--;
			n++;
		}
		pNode = pNode->pNext;
	}
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