#include<iostream>
using namespace std;
template<class T>
void bubblesort(T arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=n-1;i<j;j--)
            {
                if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
            }
        }
    }
int main()
{
    int a[5] = {1,3,2,5,4};
    int n = sizeof(a)/sizeof(a[0]);
    bubblesort<int>(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}