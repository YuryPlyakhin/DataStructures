#pragma once
class LinkedList
{
public:
	LinkedList();
	LinkedList(int data);
	~LinkedList();

	void PushBack(int data);
	void AddAtBegin(int data);
	
	// Returns true, if success
	// Returns false, if element with the position was not found
	bool InsertAfter(int position, int data);

	bool RemoveAt(int position);
	void SetData(void* pData);

	LinkedList* GetRoot();
	LinkedList* GetNext();
	LinkedList* GetLast();

	LinkedList* operator[](const int i);
	int GetNumber();

	LinkedList* SearchNext(int data);
	void RemoveDuplicatedData();
	
	// If pBegin == nullptr, the copy starts from the root
	// If pEnd == nullptr, the copy continues to the last element
	LinkedList* CopyList(LinkedList* pBegin = nullptr, LinkedList* pEnd = nullptr);
	
	// If begin == -1, the copy starts from the root
	// If end == -1, the copy continues to the end  
	LinkedList* CopyList(int begin = -1, int end = -1);

private:
	// Prohibit copy constructor and operator =
	LinkedList(const LinkedList& list) {};
	LinkedList& operator=(const LinkedList& list) {};

private:
	LinkedList *pRoot;
	LinkedList *pNext;
	int data;
};

