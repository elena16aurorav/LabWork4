#include "Node.h"

class List{
	Node Head;	// фиктивный элемент, который является признаком начала списка
	Node Tail;	// фиктивный элемент, который является признаком конца списка
	unsigned int m_size;	//количество элементов

public:
	List();
	~List();

	int size();
	void AddToHead(const Circle& circle);
	void AddToTail(const Circle& circle);
	bool RemoveOne(const Circle& circle);
};