#include<iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() {
	cout << "This is the constructor of Vehicle class" << endl;
	}
	~Vehicle() {
	cout << "This is the destructor of Vehicle class" << endl;
	}
};
class Fare {
public:
	Fare() {
		cout<<"This is the constructor of Fare class\n";
	}
	~Fare() {
		cout<<"This is the destructor of Fare class\n";
	}
};
class Car: public Vehicle {
public:
    Car(){
    cout<<"This is the constructor of Car class\n";
    }
    ~Car(){
    cout<<"This is the destructor of Car class\n";
    }

};
class Bus: public Vehicle, public Fare {
public:
    Bus(){
    cout<<"This is the constructor of Bus class\n";
    }
    ~Bus(){
    cout<<"This is the destructor of Bus class\n";
    }

};
class powerBrakes:public Car{
public:
    powerBrakes(){
    cout<<"This is the constructor of powerBrakes class\n";
    }
    ~powerBrakes(){
    cout<<"This is the destructor of powerBrakes class\n";
    }

};
int main()
{
	Bus B1;
	powerBrakes P1;
	cout<<"\n";
	return 0;
}

