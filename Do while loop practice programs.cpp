//write a program that displays back counting from 10 to 1 using do while loop
#include <iostream>
using namespace std;
int main()
{
	int i=10;
	do{ 
	   cout<<i<<endl;
	   i=i-1;
	} 
	while(i>=1);
	return 0;
}
//write a program that gets two numbers from the user and displays the result of first number raise to the power of second nymber 
#include <iostream>
using namespace std;
int main()
{ 
  int a,b;
  int result=1;
  int i=1;
  cout<<"enter first numbers=";
  cin>>a;
  cout<<"enter second number=";
  cin>>b;
  do{
  	result=result*a;
  	i=i+1;
  }
  while(i<=b);
  cout<<"Final result="<<result;
  return 0;
}