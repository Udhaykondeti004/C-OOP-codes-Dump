#include <iostream>
using namespace std;

class Distance
{
    public:
        int feet,inches;
        Distance(int f=0,int i=0)
        {
            this->feet=f;
            this->inches=i;
        }
        friend Distance operator +(Distance &d1,Distance &d2);
};
        
        Distance operator +(Distance &d1,Distance &d2)
        {
            Distance d3;
            d3.feet = d1.feet + d2.feet;
            d3.inches = d1.inches + d2.inches;
            return d3;
        }

int main()
{
    Distance d1(10,2);
    Distance d2(2,2);
    Distance d3;
    d3 = d1+d2;
    cout<<d3.feet<<" "<<d3.inches<<endl;
}