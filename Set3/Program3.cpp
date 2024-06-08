// 3:. Write a  program to find sum of all even and odd numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{
    int num, even_sum = 0, odd_sum=0;
    cout << "Enter the maxinum number to find sum of all even and odd numbers : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
        }
        else
        {
            odd_sum += i;
        }
    }
    cout<<"Even number sum is : "<<even_sum<<endl;
    cout<<"Odd number sum is : "<<odd_sum<<endl;
}