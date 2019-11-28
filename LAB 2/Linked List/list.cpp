#include <iostream>
#include "List.h"

using namespace std;

List :: List()
{
	HEAD = NULL;
	TAIL = NULL;
}

List :: ~List() {}

bool List :: isEmpty()
{
	if(HEAD == NULL)
		return true;
	else
		return false;
}

void List :: addToHead(int data)
{
	Node* new_node = new Node();
	new_node->info = data;
	new_node->next = HEAD;
	HEAD = new_node;
	if(TAIL == NULL)
		TAIL = HEAD;
}

void List :: addToTail(int data)
{
	Node* new_node = new Node();
	new_node->info = data;
	new_node->next = NULL;
	TAIL->next = new_node;
	TAIL = new_node;
}

void List :: add(int data, Node* predecessor)
{
	Node* new_node = new Node();
	new_node->info = data;
	new_node->next = predecessor->next;
	predecessor->next = new_node;
}

void List :: removeFromHead()
{
	Node* nodeToDelete;
	HEAD = nodeToDelete->next;
	delete nodeToDelete;
}

void List :: remove(int data)
{
	if(isEmpty())
		cout << "Underflow." << endl;
	if(HEAD->info == data)
	{
		removeFromHead();
		if(HEAD == NULL)
			TAIL = NULL;
	}
	else
		{
			Node* temp;
			Node* prev;
			temp = HEAD->next;
			prev = HEAD;
			while(temp!=NULL)
			{
				if(temp->info = data)
				{
					prev->next = temp->next;
					delete temp;
					if(prev->next == NULL)
						TAIL = prev;
				}
				else
				{
					prev = prev->next;
					temp = temp->next;
				}
			}
		}
	
}

bool List :: search(int data)
{
	Node* temp;
	temp = HEAD;
	while(temp!=NULL)
	{
		if(temp->info == data)
			return true;
		else
			temp = temp->next;
	}
}

void List :: traverse()
{
	Node* temp;
	temp = HEAD;
	while(temp!=NULL)
	{
		cout << temp->info << endl;
		temp = temp->next;
	}
}

bool List :: retrieve(int data, Node* output_ptr)
{
	Node* temp;
	temp = HEAD;
	while(temp!=NULL && temp->info!=data)
	{
		temp = temp->next;
	}
	if(temp == NULL)
		return false;
	else
	{
		output_ptr = temp;
		return true;
	}	
}

int main()
{
	List l;
	l.addToHead(7);
	l.addToHead(8);
	l.addToHead(9);
	l.traverse();
	cout << l.isEmpty();
	Node* pre;
	l.retrieve(8,pre);
	l.add(6,pre);
	l.traverse();
}
