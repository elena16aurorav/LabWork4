#include "List.h"

int main()
{
	List list = List();
	list.size();//=0, т.к. список пустой
	Circle circle = Circle(15, 10, 10);
	list.AddToHead(circle);
	list.size();//=1
	list.AddToTail(circle);
	list.size();//=2

	list.Empty();
	list.size();

	return 0;
}