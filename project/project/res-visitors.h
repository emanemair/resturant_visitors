#pragma once
using namespace std; 
#include<string> 
#include"student.h"

const int MAX = 100; 
template <class type >
class ResVisitors {
	type list[MAX];
	int count; 

public : 
	ResVisitors(); 
	void addVisitor(type); 
	void print()const; 
	int getCount()const;

};