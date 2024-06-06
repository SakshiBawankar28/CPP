// 4. Write a program to calculate factorial of a number. 
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120

#include<iostream>
using namespace std;

int main()
{
    int num, fact = 1;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    cout<<"Factorial is : "<<fact;
}