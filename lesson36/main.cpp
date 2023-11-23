#include "MyList.h"
#include "DList.h"

int main()
{
	/*myList::Node<int> first(6);
	myList::Node<int> second(12);

	first.next = &second;

	myList::Node<int> third(9);
	second.next = &third;

	myList::Node<int> fourth(-4);
	third.next = &fourth;

	myList::Node<int>* p = &first;
	while (p != nullptr)
	{
		p->show();
		p = p->next;
	}*/

	/*myList::List<int> a;
	a.pushBack(6);
	a.pushBack(12);
	a.pushBack(9);
	a.pushBack(-4);

	a.pushFront(134);
	a.insert(1342, 777);

	a.show();*/

	DList::Node<int> first(6);
	DList::Node<int> second(12);
	first.next = &second;

	DList::Node<int> third(9);
	second.prev = &first;
	second.next = &third;

	DList::Node<int> fourth(-4);
	third.prev = &second;
	third.next = &fourth;
	fourth.prev = &third;

	DList::Node<int>* p = &first;

	while (p != nullptr)
	{
		p->show();
		p = p->next;
	}

	p = &fourth;
	cout << "=================================\n";

	while (p != nullptr)
	{
		p->show();
		p = p->prev;
	}
}