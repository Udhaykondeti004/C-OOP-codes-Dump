#include<iostream>
using namespace std;

class item{
	private:
		int number;
		float cost;
	public:
		void getdata(){
			cout<<"Enter product code: "<<endl;
			cin>>number;
			cout<<"Enter Cost of the product: "<<endl;
			cin>>cost;
		}
		void putdata(){
			cout<<"Product code of the item is : "<<number<<endl;
			cout<<"Cost of the item is : "<<cost<<endl;
			cout<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter no of items"<<endl;
	cin>>n;
	item s;
	for(int i = 0;i<n;i++){
	
	s.getdata();
	s.putdata();
}
	return 0;

}
