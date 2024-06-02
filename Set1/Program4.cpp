// 4. Write a program to accept an integer and check if it is even or odd.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the integer : " << endl;
    cin >> num;
    if(num % 2 == 0)
    {
        cout << "Given integer is even" << endl;
    }
    else
    {
        cout << "Given integer is odd" << endl;
    }
} 
