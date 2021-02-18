#pragma once

class List
{
public:
	List() {}
	~List() {}
	void Insert(void* data);
	void Remove(void* data);
	void Print();
	void Clear();
	bool Contains(void* data);

private:
	struct Node
	{
		void* data;
		Node* next;
	};
	Node* CreateNode(void* data);

private:
	Node* head = nullptr;
	
};

