// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 

#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yy;

public:
    Date() 
    {
        cout<<"-----Default Constructor-----"<<endl;
        dd = 1;
        mm = 1;
        yy = 2000;
    }

    Date(int dd, int mm, int yy) 
    {
        cout<<"-----Parameterized Constructor-----"<<endl;
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }

    int getDay() {
        return dd;
    }
    void setDay(int dd) {
        this->dd = dd;
    }

    int getMonth() {
        return mm;
    }
    void setMonth(int mm) {
        this->mm = mm;
    }

    int getYear() {
        return yy;
    }
    void setYear(int yy) {
        this->yy = yy;
    }

    void display() {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() 
{
    Date d1;
    d1.display();

    Date d2(10, 12, 2023);
    d2.display();


    d1.setDay(25);
    d1.setMonth(6);
    d1.setYear(2025);
    cout << "\nModified Date:" << endl;
    d1.display();

    return 0;
}


