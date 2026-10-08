//write a program that declares a class with one integer data member and two member fuctin in() and out() to in put data in data members
#include <iostream>
using namespace std;
class Test
{
	private:
		int n;
		public:
			void in(){
				cout<<"Enter a number";
				cin>>n;

			}
			void out(){
				cout<<"the value of n is"<<n;
			}
};
int main(){
	Test data;
	data.in();
	data.out();
	return 0;
}
