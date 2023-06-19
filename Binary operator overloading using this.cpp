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
        
        Distance operator +(Distance &d2)
        {
            Distance d3;
            d3.feet = this->feet + d2.feet;
            d3.inches = this->inches + d2.inches;
            return d3;
        }
};

int main()
{
    Distance d1(10,2);
    Distance d2(2,2);
    Distance d3;
    d3 = d1+d2;
    cout<<d3.feet<<" "<<d3.inches<<endl;
}