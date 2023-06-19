#include<iostream>
#include<cstring>
using namespace std;
class Student
{	public:
    int rollno;
    char name[30];
    float marks;
};
int main()
{
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Student *a=new Student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of student"<<i+1<<":"<<endl;
        cout<<"Enter roll no:"<<endl;
        cin>>a[i].rollno;
        cout<<"Enter name"<<endl;
        cin.ignore();
        cin.getline(a[i].name,30);
        cout<<"Enter marks"<<endl;
        cin>>a[i].marks;
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of student"<<i+1<<":"<<endl;
        cout<<"Roll number"<<a[i].rollno<<endl;
        cout<<"Name:"<<a[i].name<<endl;
        cout<<"Marks:"<<a[i].marks<<endl;
    }
    delete []a;
    return 0;
}
