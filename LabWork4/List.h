#pragma once
#include "Node.h"
#include <ostream>
#include <fstream>


class List{
	Node Head;// ��������� �������, ������� �������� ��������� ������ ������
	Node Tail;// ��������� �������, ������� �������� ��������� ����� ������
	unsigned int m_size;//���������� ��������� ������

public:
	List();
	List(const List& other);
	List(List&& other);

	~List();

	List& operator=(const List& other);
	List& operator=(List&& other);

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
	friend std::ofstream& operator<<(std::ofstream& ofs, const List& ls);
	friend std::ifstream& operator>> (std::ifstream& ifs, List& ls);
};
