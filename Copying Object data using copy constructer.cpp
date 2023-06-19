#include<iostream>
using namespace std;
class point{
	private:
		int x,y;
	public:
		point(int x1,int y1) //constructor
		{
			x = x1;
			y = y1;
		}
		point(const point &p1) //copy constructor
		{
			x = p1.x;
			y = p1.y;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}		
};
int main()
{
	int a,b;
	cout<<"Enter A value"<<endl;
	cin>>a;
	cout<<"Enter B value"<<endl;
	cin>>b;
	point p1(a,b); //constructor is called
	point p2 = p1; //copy constructor is called
	cout<<"p1.x = "<<p1.getx()<<", p1.y = "<<p1.gety()<<endl;
	cout<<"p2.x = "<<p2.getx()<<", p2.y = "<<p2.gety()<<endl;
}
