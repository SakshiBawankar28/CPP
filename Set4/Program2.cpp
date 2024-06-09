// 1. Create a class Person with data members as name, age, city. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 

#include<iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    string city;
    public:
    Person()
    {
        cout<<"----Default Constructor-----"<<endl;
        name = "Rama";
        age = 10;
        city = "India";
    }
    Person(string name,int age, string city)
    {
        cout<<"----Parameterized Constructor-----"<<endl;
        this->name = name;
        this->age = age;
        this->city = city;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    
    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return age;
    }

    void setCity(string city)
    {
        this->city = city;
    }
    string getCity()
    {
        return city;
    }

    void display()
    {
        cout<< "Name = "<<name<<"\nAge = "<<age<<"\nCity = "<<city<<endl;
    }
};

int main()
{
    Person p1;
    p1.display();
    cout<<"\n";

    Person p2("John", 12, "London");
    p2.display();
    cout<<"\n";

    Person p3;
    p3.setName("Richa");
    p3.setAge(9);
    p3.setCity("New York");
    p3.display();
}
