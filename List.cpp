#include "List.h"
#include <iostream>

void List::Insert(void* data)
{
	Node* newNode = CreateNode(data);
	Node** tracer = &head;

	while ((*tracer)) 
		tracer = &(*tracer)->next;

	newNode->next = *tracer;
	*tracer = newNode;
}

void List::Remove(void* data)
{
	Node** tracer = &head;
	Node* aux = nullptr;

	while ((*tracer) && (*tracer)->data != data)
		tracer = &(*tracer)->next;
	
	if ((*tracer))
	{
		aux = *tracer;
		*tracer = (*tracer)->next;
		delete aux;
	}
}

void List::Print()
{
	Node** tracer = &head;
	while ((*tracer))
	{
		std::cout << *(int*)(*tracer)->data;
		tracer = &(*tracer)->next;
	}
}

void List::Clear()
{
	Node** tracer = &head;
	Node* aux = nullptr;

	while ((*tracer))
	{
		aux = *tracer;
		*tracer = (*tracer)->next;
		delete aux;
	}
}

bool List::Contains(void* data)
{
	Node** tracer = &head;

	while ((*tracer) && (*tracer)->data != data)
		tracer = &(*tracer)->next;

	return *tracer;
}

List::Node* List::CreateNode(void* data)
{
	Node* node = new List::Node();
	
	node->data = data;
	node->next = nullptr;

	return node;
}
