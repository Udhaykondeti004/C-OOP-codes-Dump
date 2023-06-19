#include<iostream>
using namespace std;
int display(int arr[],int n)
{
	cout<<"The elements in the array are"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int i,n,loc,ch,arr[20],num;
	char choice;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" elements"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	display(arr,n);
	cout<<endl;


do{
	cout<<"1.Deletion at Begining"<<endl;
	cout<<"2.Deletion at End"<<endl;
	cout<<"3.Deletion at Specific Location"<<endl;
	cout<<"Enter a choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			for(i=0;i<n;i++)
			{
				arr[i] = arr[i+1];
			}
			n = n-1;
			display(arr,n);
			break;
		case 2:
			n = n-1;
			display(arr,n);
			break;
		case 3:
			for(i=loc-1;i<n;i++)
			{
				arr[i] = arr[i+1];
			}
			n = n-1;
			display(arr,n);
			break;
		default:
			cout<<"Enter correct choice"<<endl;
	}
	 cout<<"Do you want to use again ?";
	 cin>>choice;
	}while(choice =='Y'|| choice == 'y');
	return 0;
}
