// Employee Hierarchy:
//Problem Statement: Build a system for managing employees. Create a base class Employee with attributes such as name, employee ID, and salary. Then, derive classes like Manager and Developer, each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class.

#include<iostream>
#include <string>
using namespace std;

class Emp
{
    protected :
    string name;
    int empId;
    double salary;
    public :
    Emp(string name, int empId, double salary)
    {
        this -> name = name;
        this -> empId = empId;
        this -> salary = salary;
    }
    virtual void calculate_salary()
    {
        cout<<"Salary...."<<endl;
    }
    virtual void display()
    {
        cout<<"Name = "<<name<<"    EmpId = "<<empId<<"    Salary = "<<salary<<endl;
    }
};

class Manager : public Emp
{
    private:
    int intensive;
    public:
    Manager(string name, int empId, double salary ,int intensive) : Emp(name, empId, salary)
    {
        this -> intensive = intensive;
    }
    void calculate_salary()
    {
        salary = salary+intensive;
       
    }
    void display()
    {
        Emp::display();
        cout<<"Salary of Manager = "<<salary<<endl;
    }

};


class Developer : public Emp
{
    private:
    int bonus;
    public:
    Developer(string name, int empId, double salary ,int bouns) : Emp(name, empId, salary)
    {
        this -> bonus = bonus;
    }
    void calculate_salary()
    {
        salary = salary+bonus;
    }
    void display()
    {
        Emp ::display();
        cout<<"Salary of Developer = "<<salary<<endl;
    }
};

int main()
{
    Emp e("rama", 101, 10000);
    e.display();
    e.calculate_salary();
    cout<<endl;

    Manager m("Raman",201,30000,1000);
    m.display();
    m.calculate_salary();
    cout<<endl;

    Developer d("Rashmi", 301, 25000,1000);
    d.display();
    d.calculate_salary();
}

