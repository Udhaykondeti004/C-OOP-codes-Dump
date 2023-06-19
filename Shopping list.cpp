#include<iostream> 
using namespace std;

class item{
	int Code[50];
	float Price[50];
	int count;
	public:
	void counter(void)
	{
		count = 0;
	}
	void add(void);
	void total(void);
	void del(void);
};

void item :: add(void)
{
	cout<<"Enter Item Code: ";
	cin>>Code[count];
	cout<<"Enter Item Cost: ";
	cin>>Price[count];
	count++;
	cout<<endl;
}


void item::total(void)
{
	float sum = 0;
	for(int i=0;i<count;i++)
	sum = sum + Price[i];
	cout<<"\nTotal value: "<<sum<<endl;
}

void item :: del(void)
{
	
	int a;
	cout<<"Enter item Code: ";
	cin>>a;
	for(int i=0;i<count;i++)
	if(Code[i] == a)
	Price[i] = 0;

}

int main()
{
	item list;
	list.counter();
	int x;
	do
	{
	cout<<"\n1. Add an item";
	cout<<"\n2. Display total value";
	cout<<"\n3. Delete an item";
	cout<<"\n4. Quit";
	cout<<endl;
	cin>>x;
	switch(x){
	case 1: list.add();
	break;
	case 2: list.total();
	break;
	case 3: list.del();
	break;
	case 4:
	break;
	default: cout<<"Invalid Option\n";
   }
}

while(x!= 4);

return 0;
}

