#include<iostream>
using namespace std;
template<class T>
T max(T a[],int n)
{
	T maxi=a[0];
	for(int i=0;i<n;i++)
	{
		if(maxi<a[i])
		{
			maxi=a[i];
		}
	}
	return maxi;
}


int main()
{
	int a[5]={10,20,30,40,50};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	int res=max<int>(a,n);
    cout<<"maximum element is "<<res;
    
	
}m
