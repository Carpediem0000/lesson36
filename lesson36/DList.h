#pragma once
#include <iostream>
using namespace std;

namespace DList {
	template <typename T>
	class Node
	{
	public:
		T info;
		Node* prev;
		Node* next;

		Node(T value) {
			info = value;
			prev = next = nullptr;
		}

		void show()const {
			cout << "Info: " << info << endl;
			cout << "\tPrev: " << prev << endl;
			cout << "\tNext: " << next << endl << endl;
		}
	};

	template <typename U>
	class List {
		Node<U>* head;
		Node<U>* tail;
	public:
		List() {
			head = tail = nullptr;
		}

		void pushBack(U value) {
			Node<U>* el = new Node<U>(value);
			if (head == nullptr)
			{
				head = tail = el;
			}
			else
			{
				tail->next = el;
				el->prev = tail;
				tail = el;
			}
		}

		void pushFront(U value) {
			Node<U>* el = new Node<U>(value);
			if (head == nullptr)
			{
				head = tail = el;
			}
			else
			{
				el->next = head;
				head->prev = el;
				head = el;
			}
		}

		void insert(U after, U value) {
			Node<U>* el = new Node<U>(value);
			if (head == nullptr)
			{
				head = tail = el;
			}
			else
			{
				Node<U>* p = head;
				while (p != nullptr)
				{
					if (p->info == after)
					{
						el->next = p->next;
						el->prev = p;
						p->next = el;
						return;
					}
					p = p->next;
				}
				if (p == nullptr)
				{
					tail->next = el;
					el->prev = tail;
					tail = el;
				}
			}
		}

		void show()const {
			Node<U>* p = head;
			if (head == nullptr)
			{
				cout << "List is empty!\n";
			}
			else
			{
				while (p != nullptr)
				{
					cout << p->info << " ";
					p = p->next;
				}
			}
		}
	};
}