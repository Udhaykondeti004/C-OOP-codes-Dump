#include <iostream>
#include <string>

using namespace std;


// Create a class named Vehicle with two data member named mileage and price. Create its two subclasses
class Vehicle{
private:
	float mileage;
	float price;
	
public:
	Vehicle(){}


	Vehicle(float mileage,float price){
		this->mileage=mileage;
		this->price=price;
	}


	float getMileage(){
		return this->mileage;
	}
	float getPrice(){
		return this->price;
	}


	virtual void display(){
		cout<<"Mileage: "<<mileage<<"\n";
		cout<<"Price: "<<price<<"\n";
	}
};


//Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
class Car:public Vehicle{
private:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car(){}


	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost=ownershipCost;
		this->warranty=warranty;
		this->seatingCapacity=seatingCapacity;
		this->fuelType=fuelType;
	}


	float getOwnershipCost(){
		return this->ownershipCost;
	}
	int getWarranty(){
		return this->warranty;
	}
	int getSeatingCapacity(){
		return this->seatingCapacity;
	}
	string getFuelType(){
		return this->fuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<"\n";
		cout<<"Warranty: "<<warranty<<"\n";
		cout<<"Seating capacity: "<<seatingCapacity<<"\n";
		cout<<"Fuel type: "<<fuelType<<"\n";
	}
};
//Bike with data members to store the number of cylinders, number of gears, cooling type (air, liquid or oil).
class Bike:public Vehicle{
private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}




	int getNumberCylinders(){
		return this->numberCylinders;
	}
	int getNumberGears(){
		return this->numberGears;
	}
	string getCoolingType(){
		return this->coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};


int main()
{
	Car car(10000,36000,29000,10,3,"diesel");
    Bike bike(56000,52000,6,6,"liquid");
	car.display();
	cout<<"\n";
	bike.display();
	system("pause");
    return 0;
}

