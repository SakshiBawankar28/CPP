// 2: Write a program to Accept a number and display its sum of digits.:ex 568 -> 5+6+8 -> 19 

#include<iostream>
using namespace std;

int main()
{
    int num, sum=0, rem;
    cout<<"Enter the number : ";
    cin>>num;
    int temp = num;
    while (temp>0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    cout<<"Sum of digit : "<<sum;
    
} 
