#include<iostream>
using namespace std;
class Animal{
	private:
		int legs,eyes;
		public:
			int ears;
		void setData(int a,int b);
		void getData()
		{
			cout<<"The total legs are:"<<legs<<endl;
			cout<<"The total eyes are:"<<eyes<<endl;
			cout<<"The total ears are:"<<ears<<endl;
		}
};
void Animal::setData(int a1,int b1){
	legs=a1;
	eyes=b1;	
}
class Student{
	private: 
	       int rollno;
	public:
		int marks;
		void setData(int a);
		void getData(){
			cout<<"The roll no. of student is="<<rollno<<endl;
			cout<<"The marks are="<<marks<<endl;
		}
};
void Student::setData(int r){
	rollno=r;
}

int main(){
	Student Ali;
	Ali.marks=520;
	Ali.setData(7542);
	Ali.getData();
	Animal Dog;
	Dog.ears=2;
	Dog.setData(4,2);
	Dog.getData();
	return 0;
}