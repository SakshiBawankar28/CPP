// 5. Write a program to calculate factors of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num, fact, i;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Factors : ";
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << i << "  ";
        }
    }
}
