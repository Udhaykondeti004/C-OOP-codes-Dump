#include<iostream>
using namespace std;
class two;

class one{
	int x;
	public:
		void setdata(int n)
		{
			x = n;
		}
	friend void great(one,two);
};

class two{
	int y;
	public:
		void setdata(int n)
		{
			y = n;
		}
	friend void great(one,two);
};

void great(one a,two b)
{
	if(a.x>b.y)
	cout<<"Maximum out of two numbers is "<<a.x;
	else if(a.x<b.y)
	cout<<"Maximum out of two numbers is "<<b.y;
	else
	cout<<"Both numbers are equal"<<endl;
}

int main()
{
	one a;
	two b;
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	a.setdata(num);
	
	cout<<"Enter another number: ";
	cin>>num;
	b.setdata(num);
	great(a,b);
	return 0;
}
