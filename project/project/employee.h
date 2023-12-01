#pragma once
#include<string>
using namespace std; 




class Employee {
	string eName; 
	string position;
public:
	Employee(); 
	void setEname(string); 
	void setPosition(string); 
	string getEname()const; 
	string getPosition()const; 
	void print()const; 

};