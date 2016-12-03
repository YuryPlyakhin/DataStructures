#include "stdafx.h"
#include "LinkedList.h"


LinkedList::LinkedList() : LinkedList(0)
{
}

LinkedList::LinkedList(int initialData)
{
	pRoot = new LinkedList();
	pNext = nullptr;
	data = initialData;
}

LinkedList::~LinkedList()
{
	LinkedList *pCurrent = pRoot;
	LinkedList *pCurrentNext = pCurrent->pNext;

	while(pCurrent)
	{
		delete pCurrent;
		pCurrent = pCurrentNext;

		if (pCurrent)
		{
			pCurrentNext = pCurrent->pNext;
		}
	}
}

void LinkedList::PushBack(int data)
{
	LinkedList *pCurrent = this;
	LinkedList *pCurrentNext = pCurrent->pNext;

	while (pCurrentNext)
	{
		pCurrent = pCurrentNext;
		pCurrentNext = pCurrent->pNext;
	}

	pCurrent->pNext = new LinkedList(data);
}

void LinkedList::AddAtBegin(int data)
{
	LinkedList *newRoot = new LinkedList(data);
	newRoot->pNext = pRoot;
	pRoot = newRoot;
}

bool LinkedList::InsertAfter(int position, int data)
{
	LinkedList *pCurrent = (*this)[position];

	if (pCurrent)
	{
		LinkedList *pNewItem = new LinkedList(data);
		pNewItem->pNext = pCurrent->pNext;
		pCurrent->pNext = pNewItem;
		return true;
	}

	return false;
}

bool LinkedList::RemoveAt(int position)
{
	LinkedList *pPrevious = nullptr;

	if (position < 0)
	{
		return false;
	}
	else if (position > 0)
	{
		pPrevious = (*this)[position - 1];
	}

	if (pPrevious)
	{
		LinkedList *pNewItem = new LinkedList(data);
		pNewItem->pNext = pCurrent->pNext;
		pCurrent->pNext = pNewItem;
		return true;
	}

	return false;
}

void LinkedList::SetData(void * pData)
{
}

LinkedList * LinkedList::GetRoot()
{
	return nullptr;
}

LinkedList * LinkedList::GetNext()
{
	return nullptr;
}

LinkedList * LinkedList::GetLast()
{
	return nullptr;
}

LinkedList * LinkedList::operator[](const int i)
{
	if (i < 0)
	{
		return nullptr;
	}

	LinkedList *pCurrent = pRoot;
	for (int j = 0; j < i && pCurrent; ++j)
	{
		pCurrent = pCurrent->pNext;
	}

	return pCurrent;
}

int LinkedList::GetNumber()
{
	return 0;
}

LinkedList * LinkedList::SearchNext(int data)
{
	return nullptr;
}

void LinkedList::RemoveDuplicatedData()
{
}

LinkedList * LinkedList::Search(void * pData)
{
	return nullptr;
}

LinkedList * LinkedList::CopyList(LinkedList * pBegin, LinkedList * pEnd)
{
	return nullptr;
}

LinkedList * LinkedList::CopyList(int begin, int end)
{
	return nullptr;
}
