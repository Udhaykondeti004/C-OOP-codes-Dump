#include <iostream>

using namespace std;

int apples = 0, mangoes = 0;
int total_fruits = 0;

class fruit
{
public:
    void input_fruits()
    {
        cout << "Enter the number of apples : ";
        cin >> apples;

        cout << "Enter the number of mangoes : ";
        cin >> mangoes;
    }

    void calculate_total()
    {
        total_fruits = apples + mangoes;
        cout << "The total fruits in the basket are : " << total_fruits << endl;
    }
};

class apple : public fruit
{
public:
    void show_apples()
    {
        cout << "The number of apples in the basket is : " << apples << endl;
    }
};

class mango : public fruit
{
public:
    void show_mangoes()
    {
        cout << "The number of mangoes in the basket is : " << mangoes << endl;
    }
};

int main()
{
    fruit f1;
    apple a1;
    mango m1;
    f1.input_fruits();
    a1.show_apples();
    m1.show_mangoes();
    f1.calculate_total();
    return 0;
}

