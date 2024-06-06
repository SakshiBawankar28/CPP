// 1:Write a program that accepts numbers continuously as long as the number is positive and prints the sum of the given numbers. 

#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout<<"Enter the number (to stop enter 0 or -ve) : ";
    cin>>num;
    do
    {
        sum = sum + num;
        cin>>num;
    }while (num != 0);
    
    cout<<"Sum = "<<sum;

}