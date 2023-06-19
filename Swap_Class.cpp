 #include<iostream>
 using namespace std;

class pizza{             // class name(pizza)
	private:
		int a,b;        // data members
	public:
		void getdata();  //member functions
		void swapv();
		void display();
};

void pizza::getdata() 
{ 
cout<<"Enter two digits"<<endl;
cin>>a>>b;
}

void pizza::swapv()
{
	a = a+b; 
	b = a-b; 
	a = a-b; 
}

void pizza::display()
{
	cout<<"A = "<<a<<", B = "<<b;
}

int main()
{
  pizza hero; // declaring hero as a object in class called pizza
	
 hero.getdata();
 cout<<"Before Swapping: ";
 hero.display();
	
 hero.swapv(); //accesing member function using object
 cout<<endl;
 cout<<"After  Swapping: ";
 hero.display();
	
return 0;
}
