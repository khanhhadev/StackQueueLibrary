#pragma once
//#include <iostream>
//using namespace std;

template <class T>
class Queue
{
protected:
	struct m_node
	{
		T m_value;
		m_node* m_next = nullptr;
	};
	m_node* m_head = nullptr;
	m_node* m_tail = nullptr;
	int m_size = 0;
public:
	void dequeue()
	{
		m_node* tempPtr = m_head;
		m_head = m_head->m_next;
		delete tempPtr;
		m_size--;
	};

	T peek()
	{
		return m_head->m_value;
	};

	void enqueue(const T& newvalue)
	{
		m_node* newnode = new m_node;
		newnode->m_value = newvalue;
		if (m_head == nullptr) m_head = newnode;
		else m_tail->m_next = newnode;
		m_tail = newnode;
		m_size++;
	};

	int size()
	{
		return m_size;
	};

	bool isEmpty()
	{
		if (m_size == 0) return true;
		else return false;
	};

	m_node* begin()
	{
		return m_head;
	};

	m_node* end()
	{
		return m_tail;
	};

};

