#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,start,end,mid,key,count = 0;
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements in increasing order"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element for searching: ";
	cin>>key;
	start = 0;
	end = n-1;
	while (start<=end)
	{
		mid = (start+end)/2;
		if(arr[mid] == key)
		{
			count = 1;
			break;
		}
		else if(arr[mid]>key)
		end = mid-1;
		else if(arr[mid]<key)
		start = mid+1;
		else
		break;
	}
	if(count==1)
	cout<<"Element is found at "<<mid+1;
	else
	cout<<"Element not found";
	return 0;
}
