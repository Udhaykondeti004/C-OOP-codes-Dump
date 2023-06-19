#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout<<"Print Base Class"<<endl;
        }
        void show()
        {
            cout<<"Show Base class"<<endl;
        }
};
class Derived:public Base
{
    public:
        void print()
        {
            cout<<"Print derived Class"<<endl;
        }
        void show()
        {
            cout<<"Show Derived class"<<endl;
        }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
}