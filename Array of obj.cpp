#include<iostream>
using namespace std;

class Manager
{
	char name[30];
	int age;
	float salary;
	public:
		void getdata();
		void putdata();
};

void Manager::getdata()
{
	cout << "Enter Name : ";
	cin >> name;
	cout << "Enter Age : ";
	cin >> age;
	cout<<"Enter Salary : ";
	cin>>salary;

}

void Manager::putdata()
{
	cout<< name<< " ";
	cout<<age<< " ";
	cout<<salary<<" ";
	cout<<endl;
}

int main()
{
	Manager emp[30];
	int n, i;
	cout << "Enter Number of Managers - ";
	cin >> n;
	for(i = 0; i < n; i++)
		emp[i].getdata();

	cout << "Manager Details  - " << endl;

	for(i = 0; i < n; i++)
		emp[i].putdata();
}
