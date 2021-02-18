#pragma once

class List
{
public:
	void Insert(void* data);
	void Remove(void* data);
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

