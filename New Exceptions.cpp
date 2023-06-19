#include <iostream>
#include<exception>
using namespace std;

class Myerror:public exception
{
    public:
        const char* what() const throw()
        {
            return"This is a blunder mistake, try to rectify";
        }
};

int main()
{
    try
    {
        throw Myerror();
    }
    catch(Myerror &e)
    {
        cout<<"Exception that you thrown was caught"<<endl;
        cout<<"The compiler message is"<<endl;
        cout<<e.what()<<endl;
    }
}