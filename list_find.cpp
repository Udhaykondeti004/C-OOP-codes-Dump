#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> ivec{10,20,30,40};
	vector<int>::iterator it;
	
	for(it=ivec.begin();it!=ivec.end();it++)
	cout<<*it<<" ";
	cout<<endl;
	
	int x = 30;
	it = find(ivec.begin(),ivec.end(),x);
	if(it!=ivec.end())
		cout<<"Element"<<x<<" found at position "<<it-ivec.begin();
	else
		cout<<"Element not found"<<endl;
}


