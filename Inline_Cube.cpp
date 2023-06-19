#include<iostream>
using namespace std;
inline int cube(int s) // inline return-type functin-name(parameters)
{
	return s*s*s;
}

int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<"The Cube of "<<n<<" is: "<<cube(n)<<endl;
	return 0;
}
