#include <iostream>
using namespace std;

double division(int a,int b)
{
    if(b==0)
    {
        throw"Division by zero condition";
    }
    
    return (a/b);
}

int main()
{
    int x = 50,y=0;
    double z;
    try
    {
        z = division(x,y);
        cout<<z<<endl;
    }
    catch(const char* alert)
    {
        cerr<<alert<<endl;
    }
    
}