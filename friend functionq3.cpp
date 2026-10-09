//Write a C++ program to create a class Numbers with two private data members a = 10 and b = 20. Declare a friend function calculateSum() that accesses both variables and displays their sum.
#include <iostream>
using namespace std;
class numbers {
	private:
		int a=10;
		int b=20;
		friend void calculateSum(numbers Sum);
	
};
void calculateSum(numbers Sum){
	cout<<"The sum of both variable numbers = "<<Sum.a+Sum.b;
}

int main(){
	numbers Sum;
	calculateSum(Sum);
	return 0;
}