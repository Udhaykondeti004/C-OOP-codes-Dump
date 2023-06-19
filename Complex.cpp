#include<iostream>
using namespace std;
class Complex{
    int a, b;
    public:
        Complex(){}
        Complex(int a, int b){
            this -> a = a;
            this -> b = b;
        }
        void operator+=(Complex &op){
            this -> a += op.a;
            this -> b += op.b;
        }
        void operator-=(Complex &op){
            this -> a -= op.a;
            this -> b -= op.b;
        }
        void operator*=(Complex &op){
            this -> a = this -> a * op.a + this -> b * op.b;
            this -> b = this -> a * op.b + this -> b * op.a;
        }
        void display(){
            cout << a << " + " << b << "j" << endl;
        }
};
int main(){
    Complex cn1(1, 2);
    Complex cn2(3, 4);
    cout << "Before adding cn2:\ncn1 = ";
    cn1.display();
    cn1 += cn2;
    cout << "After adding cn2:\ncn1 = ";
    cn1.display();
    cn1 *= cn2;
    cout << "After multiplying cn2\ncn1 = ";
    cn1.display();
    cn1 -= cn2;
    cout << "After subtracting cn2\ncn1 = ";
    cn1.display();
    return 0;
}
