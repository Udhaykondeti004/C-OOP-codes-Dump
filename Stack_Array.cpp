#include<iostream>
using namespace std;
#define MAXSIZE 40
int top = -1;
int stack[MAXSIZE];

void push(int num)
{
	if(top==MAXSIZE-1)
	cout<<"Stack Overflow"<<endl;
	else
	{
		top = top+1;
		stack[top] = num;
		cout<<num<<" is inserted"<<endl;
	}
}

void pop()
{
	int num;
	if(top<0)
	{
		cout<<"Stack Underflow"<<endl;
	}
	else
	{
		num = stack[top];
		top = top-1;
		cout<<num<<" is deleted"<<endl;
	}
}

int main()
{
	push(8);
	push(3);
	pop();
	push(2);
	pop();
	push(9);
	push(1);
	cout<<"Elements in the array are: ";
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<" ";
	}
	return 0;	
}

