//write a program that displays "pakistan" for 5 times using while loop
#include <iostream>
using namespace std; 
int main()
{
	int a=1;
	while(a<=5)
	{
	cout<<"pakistan"<<endl;
	a++;
	}
	return 0;
}
//write a program that displays counting 1 to 10
#include <iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<=10)
	{ 
	cout<<i<<endl;
	i++;
	}
	return 0;
}
// write a program that displays first five numbers and their sum
#include <iostream>
using namespace std;
int main()
{ 
   int c=1;
   sum=0;
   while (c<=5)
   {
   	cout<<c<<endl;
   	sum=sum=c;
   	c=c+1;
   	
   }
   cout<<"sum is"<<sum;
   return 0;
}
//write a program that displays first five numbers with their squares
#include <iostream>
using namespace std;
int main()
{ 
  int z=1;
  while(z<=5)
  {
  	cout<<z<<"\t"<<z*z<<endl;
  	z++;
  }
  return 0;
}
//write a program tha inputs a number from the use and displays a table of that number
#include <iostream>
using namespace std;
int main()
{
	int c,n;c=1;
	cin>>n;
	while(c<=10)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
		c=c+1;
	}
	return 0;
}
