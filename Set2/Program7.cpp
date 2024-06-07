/*
7. Write a menu driven program to do following operations :
a) Compute area of circle
b) Compute area of rectangle
c) Compute area of triangle
d) Exit
Display menu, ask choice to the user, depending on choice accept the parameters and perform the operation. Continue this process until user selects exit option.
*/

#include <iostream>
using namespace std;

int main()
{
    int choice, l, b, h, r;
    float area;
    do
    {
        cout << "\n\n1) Compute area of circle    \n2) Compute area of rectangle  \n3) Compute area of triangle  \n4) Exit\n";
        cout << "Enter the choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "\nEnter the radius of circle : ";
            cin >> r;
            area = 3.14 * r * r;
            cout << "Area of circle : " << area;
            break;
        case 2:
            cout << "\nEnter the length and breadth of rectangle : ";
            cin >> l >> b;
            area = l * b;
            cout << "Area of rectangle : " << area;
            break;
        case 3:
            cout << "\nEnter the base and height of triangle : ";
            cin >> r;
            area = (1 / 5) * b * h;
            cout << "Area of triangle : " << area;
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice";
            break;
        }
    } while (choice != 4);
}