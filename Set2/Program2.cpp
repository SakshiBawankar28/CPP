//2. Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;

int main()
{
    int x,n,pow=1;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the power : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        pow = pow * x;
    }
    cout<<"Power is : "<<pow;
}
