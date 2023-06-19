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
	cout<<"1.Insertion at Begining"<<endl;
	cout<<"2.Insertion at End"<<endl;
	cout<<"3. Insertion at Specific Location"<<endl;
	cout<<"Enter a choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"Enter new element"<<endl;
		cin>>num;
		for(i = n-1;i>=0;i--){
			arr[i+1] = arr[i];
		}
		arr[0] = num;
		n = n+1;
		display(arr,n);
		break;
		case 2: cout<<"Enter a new element"<<endl;
		cin>>num;
		arr[n] = num;
		n = n+1;
		display(arr,n);
		break;
		case 3: cout<<"Enter a new element"<<endl;
		cin>>num;
		cout<<"Enter location"<<endl;
		cin>>loc;
		for(i=n-1;i>=loc-1;i--)
		{
			arr[i+1] = arr[i];
		}
		arr[loc-1] = num;
		n = n+1;
		display(arr,n);
		
	}
	 cout<<"Do you want to use again ?";
	 cin>>choice;
	}while(choice =='Y'|| choice == 'y');
	return 0;
}
