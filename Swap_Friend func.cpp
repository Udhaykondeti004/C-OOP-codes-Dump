#include <iostream> 
using namespace std; 
class class_2;  
class class_1 
{ 
	int x; 
	public: 
		void setdata(int i) 
		{ 
			x=i; 
		} 
	friend void swap(class_1,class_2); 
}; 
class class_2
{ 
	int y; 
	public: 
		void setdata(int i) 
		{ 
			y=i; 
		} 
	friend void swap(class_1,class_2); 
}; 
void swap(class_1 a, class_2 b) 
{ 
	int temp;
	temp=a.x;
	a.x=b.y;
	b.y=temp;
	cout<<"Values after swapping"<<endl; 
	cout <<"A : "<<a.x << std::endl; 
	cout <<"B : "<<b.y << std::endl; 
} 
int main() 
{ 
	class_1 a; 
	class_2 b; 
	int value1,value2;
	cout<<"Enter A: ";
	cin>>value1;
	cout<<"Enter B: ";
	cin>>value2;
	a.setdata(value1); 
	b.setdata(value2); 
	swap(a,b); 
return 0; 
}
