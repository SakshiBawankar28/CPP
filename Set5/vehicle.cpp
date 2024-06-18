// Vehicle Inheritance:
// Problem Statement: Develop a class hierarchy for vehicles. Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck. Each derived class should have unique properties like the number of wheels and specific methods like start_engine().


#include <iostream>
#include <string>

using namespace std;

// Base class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string _brand, int _year) : brand(_brand), year(_year) {}

    virtual void start_engine() const = 0; // Pure virtual function

    virtual void display() const {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
protected:
    int numWheels;

public:
    Car(string _brand, int _year, int _numWheels) : Vehicle(_brand, _year), numWheels(_numWheels) {}

    void start_engine() const override {
        cout << "Starting the car's engine..." << endl;
    }

    void display() const override {
        Vehicle::display();
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

// Derived class Motorcycle
class Motorcycle : public Vehicle {
protected:
    int numWheels;

public:
    Motorcycle(string _brand, int _year, int _numWheels) : Vehicle(_brand, _year), numWheels(_numWheels) {}

    void start_engine() const override {
        cout << "Starting the motorcycle's engine..." << endl;
    }

    void display() const override {
        Vehicle::display();
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

// Derived class Truck
class Truck : public Vehicle {
protected:
    int numWheels;

public:
    Truck(string _brand, int _year, int _numWheels) : Vehicle(_brand, _year), numWheels(_numWheels) {}

    void start_engine() const override {
        cout << "Starting the truck's engine..." << endl;
    }

    void display() const override {
        Vehicle::display();
        cout << "Number of Wheels: " << numWheels << endl;
    }
};

int main() {
    // Creating Car object
    Car car("Toyota", 2022, 4);
    cout << "Car Details:" << endl;
    car.display();
    car.start_engine();
    cout << endl;

    // Creating Motorcycle object
    Motorcycle motorcycle("Honda", 2021, 2);
    cout << "Motorcycle Details:" << endl;
    motorcycle.display();
    motorcycle.start_engine();
    cout << endl;

    // Creating Truck object
    Truck truck("Ford", 2020, 6);
    cout << "Truck Details:" << endl;
    truck.display();
    truck.start_engine();
    cout << endl;

    return 0;
}
