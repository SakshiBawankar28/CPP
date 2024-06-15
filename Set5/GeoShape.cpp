//Geometric Shapes with Polymorphism:
//Problem Statement: Extend the shape hierarchy example by implementing polymorphism. Define a base class Shape with methods to calculate area and perimeter. Then, create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.

#include <iostream>
#include <cmath>

using namespace std;

// Base class
class Shape {
public:
    // Virtual functions for area and perimeter calculation
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Overridden area calculation method
    double area() const override {
        return M_PI * radius * radius;
    }

    // Overridden perimeter calculation method
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Overridden area calculation method
    double area() const override {
        return length * width;
    }

    // Overridden perimeter calculation method
    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Overridden area calculation method using Heron's formula
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Overridden perimeter calculation method
    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    // Creating objects of different shapes
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    // Calculating and printing area and perimeter for each shape
    cout << "Circle: Area = " << circle.area() << ", Perimeter = " << circle.perimeter() << endl;
    cout << "Rectangle: Area = " << rectangle.area() << ", Perimeter = " << rectangle.perimeter() << endl;
    cout << "Triangle: Area = " << triangle.area() << ", Perimeter = " << triangle.perimeter() << endl;

    return 0;
}
