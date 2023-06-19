#include<iostream>
using namespace std;

int large(int arr[],int n)
{
	int max = arr[0];
	for(int i = 1;i<n;i++)
	{
		if(arr[i]>max)
		max = arr[i];
	}
	return max;
}

int main()
{
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The largest element in the array is "<<large(arr,n);
	return 0;
}
