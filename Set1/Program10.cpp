// 10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3

#include<iostream>
using namespace std;

int main()
{
    int m,n,pow=1;
    cout<<"Enter the number : ";
    cin>>m;
    cout<<"Enter the power : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        pow = pow * m;
    }
    cout<<pow<<endl;
}