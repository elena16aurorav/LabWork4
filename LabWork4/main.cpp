#include "List.h"

int main()
{
	List list = List();
	list.size();//=0, т.к. список пустой
	Circle circle = Circle(15, 10, 10);
	Circle circle2 = Circle(155, 105, 105);
	list.AddToHead(circle);
	list.size();//=1
	list.AddToTail(circle);
	list.size();//=2

	list.Empty();
	list.size();

	list.AddToHead(circle);
	list.size();//=1
	list.AddToTail(circle2);
	list.size();//=2
	list.AddToTail(circle);
	list.size();//=3
	//list.RemoveOne(circle);
	//list.Remove(circle);
	list.size();

	list.sort();
	list.size();

	return 0;
}