#include<iostream>
using namespace std;
class x{
	private:
		int a;
	public:
		x(int a1)
		{
			a = a1;
		}
		friend class y;
};
class y{
	private:
		int b;
	public:
		y(int b1)
		{
			b = b1;
		}
		void add(x p)
		{
			cout<<(b+p.a);
		}
		void sub(x p)
		{
			cout<<(b-p.a);
		}
};
int main()
{
	x x1(15);
	y y1(10);
	y1.add(x1);
	y1.sub(x1);
	return 0;
}
