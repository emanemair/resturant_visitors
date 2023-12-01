#include<iostream> 
#include"student.h"
#include"employee.h"
#include"res-visitors.h"
using namespace std; 

int main()
{

	Employee emp1, emp2; 
	Student std1; 
	ResVisitors<Employee> visitors_e;
	ResVisitors<Student>visitors_s;

	emp1.setEname("Ali"); 
	emp1.setPosition("Manager"); 
	emp2.setEname("Omar"); 
	emp2.setPosition("Clerk"); 
	std1.setName("Eman"); 
	std1.setID(555); 
	std1.setGpa(3.4); 
	emp2.print(); 
	emp1.print();
	std1.print(); 
	visitors_e.print();
	visitors_e.addVisitor(emp1); 
	visitors_e.addVisitor(emp2); 
	visitors_e.print(); 
	visitors_s.addVisitor(std1);
	visitors_s.print(); 

	
	return 0; 
}