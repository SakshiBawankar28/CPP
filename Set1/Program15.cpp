// 15: Write a  program to enter a number and print its reverse.

#include <iostream>
using namespace std;

int main()
{
    int num, reverse=0, remainder;
    cout << "Enter the number : ";
    cin >> num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    cout << "Reverse number is : "<<reverse;
}