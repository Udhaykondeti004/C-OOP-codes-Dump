#include <iostream>
using namespace std;

class Distance
{
  public:
    int feet,inches;
    Distance(int f,int i)
    {
        this->feet = f;
        this->inches = i;
    }
    
    void operator - ()
    {
        feet--;
        inches--;
        cout<<feet<<"'"<<inches<<endl;
    }
};

int main()
{
    Distance d1(8,9);
    -d1;
}

