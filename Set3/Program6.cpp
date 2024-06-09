/*
6:Write a program to print following pattern.
*
* *
* * *
* * * *
* * * * *
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}