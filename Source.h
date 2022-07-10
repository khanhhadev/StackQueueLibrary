#pragma once
#include "Student.h"
#include "Stack.h"
#include "Queue.h"

void autoAddStudent(Stack<Student>& listStudent, int count)
{
	static int studen_id = 1;
	static char name = 'A';
	const string firstname = "Tran ";
	const int age = 18;
	for (int turn = 0; turn < count; turn++)
	{
		listStudent.push(Student(to_string(studen_id++),firstname + (name++), age));
	}
}


void autoAddStudent(Queue<Student>& listStudent, int count)
{
	static int studen_id = 1;
	static char name = 'A';
	const int age = 18;
	for (int turn = 0; turn < count; turn++)
	{
		listStudent.enqueue(Student(to_string(studen_id++), "Tran" + name++, age));
	}
}


void autoRemoveStudent(Stack<Student>& listStudent, int count)
{
	for (int turn = 0; turn < count; turn++)
	{
		listStudent.pop();
	}
}

void autoRemoveStudent(Queue<Student>& listStudent, int count)
{
	for (int turn = 0; turn < count; turn++)
	{
		listStudent.dequeue();
	}
}

void autoPeekStudent(Stack<Student>& listStudent, int count)
{
	for (int turn = 0; turn < count; turn++)
	{
		cout << listStudent.peek() << endl;
	}
}

void autoPeekStudent(Queue<Student>& listStudent, int count)
{
	for (int turn = 0; turn < count; turn++)
	{
		cout << listStudent.peek() << endl;
	}
}