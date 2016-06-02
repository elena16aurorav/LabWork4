#pragma once
#include "Node.h"
#include <ostream>

class List{
	Node Head;// ��������� �������, ������� �������� ��������� ������ ������
	Node Tail;// ��������� �������, ������� �������� ��������� ����� ������
	unsigned int m_size;//���������� ��������� ������

public:
	List();
	~List();

	int size();
	void AddToHead(const Circle& circle);
	void AddToTail(const Circle& circle);
	//�������� �� ������ ������� ��������, 
	//������ �������� ��������� �� ��������� 
	//���������. ���� ������� ������ � ������, 
	//����� ���������� true, ���� �������� � 
	//����� ��������� � ������ �� ���� � false
	bool RemoveOne(const Circle& circle);
	//�������� �� ������ ���� ���������, ������
	//������� ��������� �� ��������� ���������. 
	//����� ���������� ���������� ��������� ���������.
	int Remove(const Circle& circle);//
	void Empty();
	void sort();//����������� ����������
	friend std::ostream& operator<<(std::ostream& os, const List& ls);
};
