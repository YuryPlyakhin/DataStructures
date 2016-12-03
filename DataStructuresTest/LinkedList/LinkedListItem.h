#pragma once
class LinkedListItem
{
public:
	LinkedListItem();
	LinkedListItem(int data);
	~LinkedListItem();

	void SetData(void* pData);

private:
	// Prohibit copy constructor and operator =
	LinkedList(const LinkedList& list) {};
	LinkedList& operator=(const LinkedList& list) {};

private:
	LinkedListItem *pNext;
	int data;
};

