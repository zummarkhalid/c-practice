//Write a C++ program to create a class Employee with a private data member salary = 50000. Use a friend function showSalary() to display the salary.
#include <iostream>
using namespace std;
class Employee{
	int salary= 50000;
	friend void showSalary(Employee zummar);
};
void showSalary(Employee zummar){
	cout<<"The Salary of Zummar = "<< zummar.salary;
	
}
int main(){
	Employee zummar;
	showSalary(zummar);
	return 0;
}