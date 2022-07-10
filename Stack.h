#pragma once
//#include <iostream>
//using namespace std;

template <class T>
class Stack
{
protected:
	struct m_node
	{
		T m_value;
		m_node* m_previous = nullptr;
	};
	m_node* m_head = nullptr;
	m_node* m_tail = nullptr;
	int m_size = 0;
public:
	void pop()
	{
		m_node* tempPtr = m_tail;
		m_tail = m_tail->m_previous;
		delete tempPtr;
		m_size--;
	};

	T peek()
	{
		return m_tail->m_value;
	};

	void push(const T& newvalue)
	{
		m_node* newnode = new m_node;
		newnode->m_value = newvalue;
		if (m_head == nullptr) m_head = newnode;
		newnode->m_previous = m_tail;
		m_tail = newnode;
		m_size++;
	};

	int size()
	{
		return m_size;
	};

	bool isEmpty()
	{
		if (m_head == nullptr) return true;
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
