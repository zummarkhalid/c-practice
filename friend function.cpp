//Write a C++ program to create a class Student with a private data member marks. Initialize marks to 85. Declare a friend function display() that accesses and displays the private marks of the student.
#include <iostream>
using namespace std;
class Student{
	int marks = 85;
	
	
	friend void display(Student S1);
};
void display(Student S1){
	cout<<"The marks of the student are "<<S1.marks<<endl;
}
int main(){
	Student S1;
	display(S1);
	return 0;
}