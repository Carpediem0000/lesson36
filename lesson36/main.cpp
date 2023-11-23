#include "MyList.h"
#include "DList.h"

int main()
{
	/*DList::Node<int> first(6);
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
	}*/

	DList::List<int> a;

	a.pushBack(4);
	a.pushBack(12);
	a.pushBack(9);
	a.pushBack(-56);

	a.show();
	cout << "\n============================\n";
	a.showRev();
}