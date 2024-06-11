// Animal Hierarchy:
// Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create
// derived classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties
// and methods related to their respective categories of animals.

#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
    int age;
    string color;

public:
    Animal(string name, int age, string color)
    {
        cout << "------Parameterized constructor Animal Class------" << endl;
        this->name = name;
        this->age = age;
        this->color = color;
    }
    virtual void sound() {}

    virtual void move() {}

    virtual void display()
    {
        cout << "Name = " << name << "  Age = " << age << "  Color = " << color << endl;
    }
};

class Mammal : public Animal
{
public:
    Mammal(string name, int age, string color) : Animal(name, age, color)
    {
        cout << "------Parameterized constructor Mammal Class------" << endl;
    }
    void sound()
    {
        cout << "Mammal sound...." << endl;
    }
    void move()
    {
        cout << "Mammels can walk and run" << endl;
    }
    void giveBirth()
    {
        cout << "Mammels can give birth" << endl;
    }
};

class Bird : public Animal
{
public:
    Bird(string name, int age, string color) : Animal(name, age, color)
    {
        cout << "------Parameterized constructor Bird Class------" << endl;
    }
    void sound()
    {
        cout << "Bird sound...." << endl;
    }
    void move()
    {
        cout << "Birds can fly in the sky" << endl;
    }
};

class Fish : public Animal
{
public:
    Fish(string name, int age, string color) : Animal(name, age, color)
    {
        cout << "------Parameterized constructor Mammal Class------" << endl;
    }
    void sound()
    {
        cout << "Fish sound...." << endl;
    }
    void move()
    {
        cout << "Fish can swim in the water" << endl;
    }
};

int main()
{
    Animal a1("ani", 32, "no");
    a1.display();
    cout << endl;

    Mammal m("Panda", 3, "Black&white");
    m.display();
    m.move();
    m.sound();
    m.giveBirth();
    cout << endl;

    Bird b("Crow", 5, "Black");
    b.display();
    b.move();
    b.sound();
    cout << endl;

    Fish f("GoldenFish", 1, "Gloden");
    f.display();
    f.move();
    f.sound();
}