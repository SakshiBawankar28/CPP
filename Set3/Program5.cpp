// 5:Write a program to accept array from user .Accept number from user and search number is present in array or not.

#include <iostream>
using namespace std;

int main()
{
    int size, num;
    bool found = false;
    cout << "Enter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to be search in the array : ";
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "Element is found";
    }
    else
    {
        cout << "Element is not found";
    }
}