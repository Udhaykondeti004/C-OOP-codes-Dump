#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,key,count = 0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

cout<<"enter the element for searching"<<endl;
cin>>key;
for(int i=0;i<n;i++)
{
	if(arr[i] == key){
	cout<<"element "<<key<<" is found at position "<<i+1<<endl;
	count = count+1;
}
	
}
if(count==0)
cout<<"Element is not found"<<endl;
cout<<"element "<<key<<" is repeated "<<count<<" times"<<endl;

}
