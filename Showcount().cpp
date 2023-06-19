#include<iostream>
using namespace std;
class counter{
	private:
	static int count;
	public:
		counter()
		{
			count++;
		}
		void showcount()
		{
			cout<<"Total number of objects: "<<count;
		}
};
int counter::count = 0;
int main()
{
	counter c1;
	counter c2;
	counter c3;
	counter c4;
	c1.showcount();
	return 0;
}
