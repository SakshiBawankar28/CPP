// Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int real;
    int imaginary;

public:
    ComplexNumber() 
    {
        cout<<"-----Default Constructor-----"<<endl;
        real = 1;
        imaginary = 2;
    }

    
    ComplexNumber(int real, int imaginary) 
    {
        cout<<"-----Parameterized Constructor-----"<<endl;
        this -> real = real;
        this -> imaginary = imaginary;
    }

    int getReal()  {
        return real;
    }

    void setReal(int real) {
        this->real = real;
    }

    int getImaginary()  {
        return imaginary;
    }

    void setImaginary(int imainary) {
        this -> imaginary = imainary;
    }

    void display()  
    {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() 
{
    ComplexNumber c1;
    c1.display();
    cout<<endl;

    ComplexNumber c2(4, 5);
    c2.display();
    cout<<endl;

    c1.setReal(3);
    c1.setImaginary(2);
    cout << "Modified value:" << endl;
    c1.display();
    cout << endl;
    return 0;
}

