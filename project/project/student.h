#pragma once
#include<string>
using namespace std;


class Student {
private: 
	string sName; 
	int ID; 
	double gpa; 

public : 
	Student(); // Default constructer 
	void setName(string); 
	void setID(int); 
	void setGpa(double); 
	string getSname()const; 
	int getID()const;
	double getGpa()const; 
	void print()const; 

};
