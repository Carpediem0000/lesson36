#pragma once
#include <iostream>
using namespace std;

namespace myList {
	template <typename T>
	class Node 
	{
	public:
		T info;
		Node* next;

		Node(T value) {
			info = value;
			next = nullptr;
		}

		void show()const {
			cout << "Info: " << info << endl;
			cout << "\tNext: " << next << endl;
		}
	};

	template <typename U>
	class List 
	{
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
				head = el;
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