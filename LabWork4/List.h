#include "Node.h"

class List{
	Node Head;	// ��������� �������, ������� �������� ��������� ������ ������
	Node Tail;	// ��������� �������, ������� �������� ��������� ����� ������
	unsigned int m_size;	//���������� ���������

public:
	List();
	~List();

	int size();
	void AddToHead(const Circle& circle);
	void AddToTail(const Circle& circle);
	bool RemoveOne(const Circle& circle);
};