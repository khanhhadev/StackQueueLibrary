#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string m_id, m_name;
	int m_age;
public:
	Student();
	Student(string ID, string Name, int Age);
	

	Student& operator= (const Student& Obj);
	friend ostream& operator<<(ostream& output, const Student& Obj);
	friend istream& operator>>(istream& input, Student& Obj);
};

Student::Student() {};

Student::Student(string ID, string Name, int Age):m_id(ID), m_name(Name), m_age(Age)
{};

Student& Student::operator= (const Student& Obj)
{
	m_id = Obj.m_id;
	m_name = Obj.m_name;
	m_age = Obj.m_age;
	return *this;
};

ostream& operator<<(ostream& output,const Student& Obj)
{
	output << "\nStudent ID: " << Obj.m_id;
	output << "\nStudent name: " << Obj.m_name;
	output << "\nStudent age: " << Obj.m_age;
	return output;
};

istream& operator>> (istream& input, Student& Obj)
{
	cout << "\nEnter student ID: "; 
	getline(input, Obj.m_id);
	cout << "\nEnter student name: ";
	getline(input, Obj.m_name);
	cout << "\nEnter student age: ";
	input >> Obj.m_age;
	return input;
};