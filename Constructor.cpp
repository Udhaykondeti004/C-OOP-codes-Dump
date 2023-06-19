#include<iostream>
using namespace std;
class wall{
	private:
		double length;
		double height;
	public:
		wall(double len,double hgt)
		{
			length = len;
			height = hgt;
		}
		
		double caluclateArea()
		{
			return length*height;
		}
};
int main()
{
	wall wall1(10.5,8.6);
	wall wall2(8.5,6.3);
	
	cout<<"Area of Wall_1: "<<wall1.caluclateArea()<<endl;
	cout<<"Area of Wall_2: "<<wall2.caluclateArea()<<endl;
	return 0;
}
