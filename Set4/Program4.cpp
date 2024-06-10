// Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.

#include <iostream>

using namespace std;

class Point
{
private:
    float x;
    float y;

public:
    
    Point()
    {
        cout<<"-----Default Constructor-----"<<endl;
        x = 2.3;
        y = 4.5;
    }

    Point(float x, float y)
    {
        cout<<"-----Parameterized Constructor-----"<<endl;
        this->x = x;
        this->y = y;
    }

    float getX() 
    {
        return x;
    }
    void setX(float x)
    {
        this->x = x;
    }

    float getY() 
    {
        return y;
    }
    void setY(float y)
    {
        this->y = y;
    }

    void display() 
    {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p1;
    cout << "Details of Point 1:" << endl;
    p1.display();
    cout << endl;
    
    Point p2(1.2, 2.1);
    cout << "Details of Point 2:" << endl;
    p2.display();
    cout << endl;
    
    Point p3;
    p3.setX(3.5);
    p3.setY(4.2);
    p1.display();
    return 0;
}
