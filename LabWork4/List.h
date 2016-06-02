#pragma once
#include "Node.h"
#include <ostream>

class List{
	Node Head;// фиктивный элемент, который является признаком начала списка
	Node Tail;// фиктивный элемент, который является признаком конца списка
	unsigned int m_size;//количество элементов списка

public:
	List();
	~List();

	int size();
	void AddToHead(const Circle& circle);
	void AddToTail(const Circle& circle);
	//удаление из списка первого элемента, 
	//данное которого совпадает со значением 
	//параметра. Если элемент найден и удален, 
	//метод возвращает true, если элемента с 
	//таким значением в списке не было – false
	bool RemoveOne(const Circle& circle);
	//удаление из списка всех элементов, данное
	//которых совпадает со значением параметра. 
	//Метод возвращает количество удаленных элементов.
	int Remove(const Circle& circle);//
	void Empty();
	void sort();//пузырьковая сортировка
	friend std::ostream& operator<<(std::ostream& os, const List& ls);
};
