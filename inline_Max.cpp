#include <iostream>
using namespace std;

inline int Max(int x, int y) {
   return (x > y)? x : y;
}

int main(){
	int a,b;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter a number: ";
	cin>>b;
	cout<<"Maximum number is: "<< Max(a,b)<<endl;
   return 0;
}
