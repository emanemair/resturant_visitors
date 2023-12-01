#include"employee.h"
#include"student.h"
#include"res-visitors.h"
#include<iostream>
using namespace std; 



Employee::Employee()
{
	this->eName = ""; 
	this->position = ""; 
}
void Employee::setEname(string name)
{
	this->eName = name; 
}

void Employee::setPosition(string pos)
{
	this->position = pos; 
}


string Employee::getEname()const {
	return this->eName; 
}

string Employee::getPosition()const {
	return this->position; 
}

void Employee::print()const
{
	cout << this->eName << " - " << this->position << endl; 
}

Student::Student()
{
	this->sName = " "; 
	this->ID = 000;
	this->gpa = 0.0; 
}
void Student::setName(string name)
{
	this->sName = name; 
}

void Student::setID(int ID)
{
	this->ID = ID; 
}

void Student::setGpa(double gpa)
{
	this->gpa = gpa; 
}


string Student::getSname()const
{
	return this->sName; 
}

int Student::getID()const {
	return this->ID; 
}

double Student::getGpa() const {
	return this->gpa; 
}


void Student::print()const {
	cout << this->sName << " _ " << this->ID << " _ " << this->gpa << endl; 
}
template <class type >
ResVisitors<type>::ResVisitors()
{
	this->count = 0; 
}
template <class type >
void ResVisitors<type>::addVisitor(type std)
{
	if (count < MAX)
	{
		this->list[count] = std;
		count++; 
	}
	else {
		cout << "visitor list is full" << endl; 
	}
	
}
template <class type >
void  ResVisitors<type>::print()const
{
	if (count != 0)
	{
		for (int i = 0; i < count; i++)
		{
			cout<<this->list[i].print << endl;
		}
	}
	else
	{
		cout << "visitor list is empty " << endl; 
		
	}
}

template <class type >
int ResVisitors<type>::getCount() const {
	return this->count; 
}